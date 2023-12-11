#include <gui/menuscreen_screen/menuScreenView.hpp>
#include <touchgfx/utils.hpp>
#include <touchgfx/hal/types.hpp>
#include <touchgfx/Unicode.hpp>
#include <cstdio>
#include <cmath>



menuScreenView::menuScreenView()
{

}

void menuScreenView::setupScreen()
{
    menuScreenViewBase::setupScreen();
    table = presenter->getSelectedTable();
    Unicode::snprintf(selectedTableLabelBuffer, SELECTEDTABLELABEL_SIZE, "%d", table);
    selectedTableLabel.invalidate();
}

void menuScreenView::tearDownScreen()
{
    presenter->setSelectedTable(table);
    menuScreenViewBase::tearDownScreen();
}
void menuScreenView::addItem(int16_t& counter, const char* itemName)
{
    counter++;

    const char* productInfo = getProductInfo();
    itemsTA.setWideTextAction(WIDE_TEXT_WORDWRAP);
    Unicode::strncpy(itemsTABuffer, productInfo, ITEMSTA_SIZE);
    Unicode::snprintf(itemsTABuffer, ITEMSTA_SIZE, "%s", itemsTABuffer);
    float total = calculateTotalPrice(productInfo);
    float roundedTotal = roundf(total * 100) / 100;
    Unicode::snprintfFloat(totalPriceLabelBuffer, TOTALPRICELABEL_SIZE, "%0.2f", roundedTotal);
    totalPriceLabel.invalidate();
    itemsTA.invalidate();
    totalPrice = roundedTotal;

}


void menuScreenView::fishAdd() { addItem(fishCounter, "fish"); }
void menuScreenView::noodleAdd() { addItem(noodleCounter, "noodle"); }
void menuScreenView::baconAdd() { addItem(baconCounter, "bacon"); }
void menuScreenView::steakAdd() { addItem(steakCounter, "steak"); }
void menuScreenView::porkAdd() { addItem(porkCounter, "pork"); }
void menuScreenView::tunaAdd() { addItem(tunaCounter, "tuna"); }
void menuScreenView::beefNasiAdd() { addItem(beefNasiCounter, "beefNasi"); }
void menuScreenView::teppanyakiAdd() { addItem(teppanyakiCounter, "teppanyaki"); }
void menuScreenView::yangzhouAdd() { addItem(yangzhouCounter, "yangzhou"); }
void menuScreenView::waterAdd() { addItem(waterCounter, "water"); }
void menuScreenView::colaAdd() { addItem(colaCounter, "cola"); }
void menuScreenView::fantaAdd() { addItem(fantaCounter, "fanta"); }
void menuScreenView::spriteAdd() { addItem(spriteCounter, "sprite"); }
void menuScreenView::oranginaAdd() { addItem(oranginaCounter, "orangina"); }
void menuScreenView::schweppesAdd() { addItem(schweppesCounter, "schweppes"); }


void::menuScreenView::finishOrder()
{
    presenter->setTotalPrice(totalPrice, table);
}

void::menuScreenView::clearOrder()
{
    fishCounter = 0;
    noodleCounter = 0;
    baconCounter = 0;
    steakCounter = 0;
    porkCounter = 0;
    tunaCounter = 0;
    beefNasiCounter = 0;
    teppanyakiCounter = 0;
    yangzhouCounter = 0;
    waterCounter = 0;
    colaCounter = 0;
    fantaCounter = 0;
    spriteCounter = 0;
    oranginaCounter = 0;
    schweppesCounter = 0;
    totalPrice = 0;
    Unicode::strncpy(itemsTABuffer, "", ITEMSTA_SIZE);
    Unicode::snprintf(itemsTABuffer, ITEMSTA_SIZE, "%s", itemsTABuffer);
    Unicode::snprintfFloat(totalPriceLabelBuffer, TOTALPRICELABEL_SIZE, "%0.2f", 0);
    totalPriceLabel.invalidate();
    itemsTA.invalidate();
}

const char* menuScreenView::getProductInfo() {
    char infoString[600];
    infoString[0] = '\0';

#define ADD_ITEM_INFO(itemName) \
    if (itemName##Counter > 0) { \
        strcat(infoString, #itemName); \
        strcat(infoString, ": Quantity: "); \
        char quantityStr[20]; \
        sprintf(quantityStr, "%d, ", itemName##Counter); \
        strcat(infoString, quantityStr); \
        strcat(infoString, "Price: "); \
        char priceStr[20]; \
        sprintf(priceStr, "%.2f\n", (float)itemName##Counter * itemName##Price); \
        strcat(infoString, priceStr); \
    }

    ADD_ITEM_INFO(fish);
    ADD_ITEM_INFO(noodle);
    ADD_ITEM_INFO(bacon);
    ADD_ITEM_INFO(steak);
    ADD_ITEM_INFO(pork);
    ADD_ITEM_INFO(tuna);
    ADD_ITEM_INFO(beefNasi);
    ADD_ITEM_INFO(teppanyaki);
    ADD_ITEM_INFO(yangzhou);
    ADD_ITEM_INFO(water);
    ADD_ITEM_INFO(cola);
    ADD_ITEM_INFO(fanta);
    ADD_ITEM_INFO(sprite);
    ADD_ITEM_INFO(orangina);
    ADD_ITEM_INFO(schweppes);


    return strdup(infoString);
}
float menuScreenView::calculateTotalPrice(const char* infoString) {
    float totalPrice = 0.0f;
    const char* searchPtr = infoString;

    while ((searchPtr = strstr(searchPtr, "Price: ")) != NULL) {
        searchPtr += strlen("Price: ");
        float itemPrice = atof(searchPtr);
        totalPrice += itemPrice;

        searchPtr = strchr(searchPtr, '\n');
        if (searchPtr != NULL) {
            searchPtr++;
        } else {
            break;
        }
    }

    return totalPrice;
}