/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/menuscreen_screen/menuScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

menuScreenViewBase::menuScreenViewBase() :
    buttonCallback(this, &menuScreenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    imageBackground.setXY(0, 0);
    imageBackground.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_800X480_SPOTLIGHTS_ID));
    add(imageBackground);

    drinksButton.setXY(19, 15);
    drinksButton.setBitmaps(touchgfx::Bitmap(BITMAP_DRINKS_ID), touchgfx::Bitmap(BITMAP_DRINKS_CLICKED_ID));
    drinksButton.setAction(buttonCallback);
    add(drinksButton);

    foodButton.setXY(159, 15);
    foodButton.setBitmaps(touchgfx::Bitmap(BITMAP_FOOD_ID), touchgfx::Bitmap(BITMAP_FOOD_CLICKED_ID));
    foodButton.setAction(buttonCallback);
    add(foodButton);

    foodContainer.setPosition(19, 66, 522, 402);
    foodContainer.setVisible(false);
    fishButton.setXY(0, 1);
    fishButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_BARBECUE_GRILL_FISH_DISH_ROASTING_THE_DISH_OF_GRILLED_FISH_5AA4398C770417_4853203115207120764875_ID), touchgfx::Bitmap(BITMAP_KISSPNG_BARBECUE_GRILL_FISH_DISH_ROASTING_THE_DISH_OF_GRILLED_FISH_5AA4398C770417_4853203115207120764875_ID));
    fishButton.setAction(buttonCallback);
    foodContainer.add(fishButton);

    noodleButton.setXY(0, 116);
    noodleButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_CHOW_MEIN_FRIED_NOODLES_LO_MEIN_YAKISOBA_CHINESE_N_DELICIOUS_BLACK_PEPPER_POWDER_BEEF_NOODLE_DISHES_5A72262FC45B07_2076864815174303198043_ID), touchgfx::Bitmap(BITMAP_KISSPNG_CHOW_MEIN_FRIED_NOODLES_LO_MEIN_YAKISOBA_CHINESE_N_DELICIOUS_BLACK_PEPPER_POWDER_BEEF_NOODLE_DISHES_5A72262FC45B07_2076864815174303198043_ID));
    noodleButton.setAction(buttonCallback);
    foodContainer.add(noodleButton);

    baconButton.setXY(1, 275);
    baconButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_BACON_ROLL_TOCINO_THAI_CUISINE_BLACK_PEPPER_BLACK_PEPPER_BACON_ROLL_5A72266FEFFA63_943799661517430383983_ID), touchgfx::Bitmap(BITMAP_KISSPNG_BACON_ROLL_TOCINO_THAI_CUISINE_BLACK_PEPPER_BLACK_PEPPER_BACON_ROLL_5A72266FEFFA63_943799661517430383983_ID));
    baconButton.setAction(buttonCallback);
    foodContainer.add(baconButton);

    steakButton.setXY(170, 275);
    steakButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_PEPPER_STEAK_HAMBURGER_EUROPEAN_CUISINE_BEEFSTEAK_WESTERN_BLACK_PEPPER_STEAK_5A722613C0FD59_0880117315174302917905_ID), touchgfx::Bitmap(BITMAP_KISSPNG_PEPPER_STEAK_HAMBURGER_EUROPEAN_CUISINE_BEEFSTEAK_WESTERN_BLACK_PEPPER_STEAK_5A722613C0FD59_0880117315174302917905_ID));
    steakButton.setAction(buttonCallback);
    foodContainer.add(steakButton);

    porkButton.setXY(339, 0);
    porkButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_TWICE_COOKED_PORK_MOO_SHU_PORK_KAREDOK_FROG_DISH_FLAVOR_BURN_FROG_5A93C71F1F87F4_5955911015196342071292_ID), touchgfx::Bitmap(BITMAP_KISSPNG_TWICE_COOKED_PORK_MOO_SHU_PORK_KAREDOK_FROG_DISH_FLAVOR_BURN_FROG_5A93C71F1F87F4_5955911015196342071292_ID));
    porkButton.setAction(buttonCallback);
    foodContainer.add(porkButton);

    tunaButton.setXY(170, 1);
    tunaButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_SASHIMI_SUSHI_TATAKI_THUNNUS_SEAFOOD_BLACK_PEPPER_TUNA_FISH_AND_FISH_5A722657C8DA53_4382241615174303598227_ID), touchgfx::Bitmap(BITMAP_KISSPNG_SASHIMI_SUSHI_TATAKI_THUNNUS_SEAFOOD_BLACK_PEPPER_TUNA_FISH_AND_FISH_5A722657C8DA53_4382241615174303598227_ID));
    tunaButton.setAction(buttonCallback);
    foodContainer.add(tunaButton);

    beefNasiButton.setXY(339, 133);
    beefNasiButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_MONGOLIAN_BEEF_NASI_CAMPUR_COOKED_RICE_THAI_CUISIN_BLACK_PEPPER_BEEF_RICE_5A7C9E8CA44218_9664482915181164926728_ID), touchgfx::Bitmap(BITMAP_KISSPNG_MONGOLIAN_BEEF_NASI_CAMPUR_COOKED_RICE_THAI_CUISIN_BLACK_PEPPER_BEEF_RICE_5A7C9E8CA44218_9664482915181164926728_ID));
    beefNasiButton.setAction(buttonCallback);
    foodContainer.add(beefNasiButton);

    teppanyakiButton.setXY(170, 120);
    teppanyakiButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_FAST_FOOD_TEPPANYAKI_FRIED_RICE_ASIAN_CUISINE_RICE_WITH_BEEF_AND_BLACK_PEPPER_5A7C9ED0983039_0090612515181165606234_ID), touchgfx::Bitmap(BITMAP_KISSPNG_FAST_FOOD_TEPPANYAKI_FRIED_RICE_ASIAN_CUISINE_RICE_WITH_BEEF_AND_BLACK_PEPPER_5A7C9ED0983039_0090612515181165606234_ID));
    teppanyakiButton.setAction(buttonCallback);
    foodContainer.add(teppanyakiButton);

    yangzhouButton.setXY(339, 275);
    yangzhouButton.setBitmaps(touchgfx::Bitmap(BITMAP_KISSPNG_YANGZHOU_FRIED_RICE_TEPPANYAKI_PILAF_CHAR_SIU_FRENCH_FOIE_GRAS_IRON_PORK_FRIED_RICE_5AA28C4B680C50_8643119715206021874262_ID), touchgfx::Bitmap(BITMAP_KISSPNG_YANGZHOU_FRIED_RICE_TEPPANYAKI_PILAF_CHAR_SIU_FRENCH_FOIE_GRAS_IRON_PORK_FRIED_RICE_5AA28C4B680C50_8643119715206021874262_ID));
    yangzhouButton.setAction(buttonCallback);
    foodContainer.add(yangzhouButton);

    add(foodContainer);

    drinksContainer.setPosition(19, 73, 534, 392);
    drinksContainer.setVisible(false);
    waterButton.setXY(12, 9);
    waterButton.setBitmaps(touchgfx::Bitmap(BITMAP_AQUAFINA_ID), touchgfx::Bitmap(BITMAP_AQUAFINA_ID));
    waterButton.setAction(buttonCallback);
    drinksContainer.add(waterButton);

    colaButton.setXY(214, 9);
    colaButton.setBitmaps(touchgfx::Bitmap(BITMAP_COCA_COLA_ID), touchgfx::Bitmap(BITMAP_COCA_COLA_ID));
    colaButton.setAction(buttonCallback);
    drinksContainer.add(colaButton);

    fantaButton.setXY(210, 210);
    fantaButton.setBitmaps(touchgfx::Bitmap(BITMAP_FANTA_ID), touchgfx::Bitmap(BITMAP_FANTA_ID));
    fantaButton.setAction(buttonCallback);
    drinksContainer.add(fantaButton);

    spriteButton.setXY(54, 210);
    spriteButton.setBitmaps(touchgfx::Bitmap(BITMAP_SPRITE_ID), touchgfx::Bitmap(BITMAP_SPRITE_ID));
    spriteButton.setAction(buttonCallback);
    drinksContainer.add(spriteButton);

    oranginaButton.setXY(381, 3);
    oranginaButton.setBitmaps(touchgfx::Bitmap(BITMAP_ORANGINA_ID), touchgfx::Bitmap(BITMAP_ORANGINA_ID));
    oranginaButton.setAction(buttonCallback);
    drinksContainer.add(oranginaButton);

    schweppesButton.setXY(393, 210);
    schweppesButton.setBitmaps(touchgfx::Bitmap(BITMAP_SCHWEPPES_ID), touchgfx::Bitmap(BITMAP_SCHWEPPES_ID));
    schweppesButton.setAction(buttonCallback);
    drinksContainer.add(schweppesButton);

    add(drinksContainer);

    textArea1.setXY(430, 23);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_THFO));
    add(textArea1);

    selectedTableLabel.setXY(494, 23);
    selectedTableLabel.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    selectedTableLabel.setLinespacing(0);
    Unicode::snprintf(selectedTableLabelBuffer, SELECTEDTABLELABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_SNC0).getText());
    selectedTableLabel.setWildcard(selectedTableLabelBuffer);
    selectedTableLabel.resizeToCurrentText();
    selectedTableLabel.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R9F6));
    add(selectedTableLabel);

    tablesButton.setXY(271, 16);
    tablesButton.setBitmaps(touchgfx::Bitmap(BITMAP_TABLES_ID), touchgfx::Bitmap(BITMAP_TABLES_CLICKED_ID));
    tablesButton.setAction(buttonCallback);
    add(tablesButton);

    finishOrderButton.setXY(553, 429);
    finishOrderButton.setBitmaps(touchgfx::Bitmap(BITMAP_FINISH_ORDER_ID), touchgfx::Bitmap(BITMAP_FINISH_ORDER_CLICKED_ID));
    finishOrderButton.setAction(buttonCallback);
    add(finishOrderButton);

    container1.setPosition(550, 0, 250, 423);
    scrollableContainer1.setPosition(0, 0, 250, 392);
    scrollableContainer1.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    scrollableContainer1.setScrollbarsAlpha(255);
    box1.setPosition(0, 0, 250, 381);
    box1.setColor(touchgfx::Color::getColorFromRGB(235, 230, 230));
    scrollableContainer1.add(box1);

    itemsTA.setPosition(0, 0, 250, 381);
    itemsTA.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    itemsTA.setLinespacing(0);
    Unicode::snprintf(itemsTABuffer, ITEMSTA_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_DUHS).getText());
    itemsTA.setWildcard(itemsTABuffer);
    itemsTA.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AO4S));
    scrollableContainer1.add(itemsTA);

    container1.add(scrollableContainer1);

    totalPriceLabel.setPosition(3, 392, 189, 27);
    totalPriceLabel.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    totalPriceLabel.setLinespacing(0);
    Unicode::snprintf(totalPriceLabelBuffer, TOTALPRICELABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_3FVV).getText());
    totalPriceLabel.setWildcard(totalPriceLabelBuffer);
    totalPriceLabel.setTypedText(touchgfx::TypedText(T___SINGLEUSE_19Q2));
    container1.add(totalPriceLabel);

    clearButton.setXY(206, 392);
    clearButton.setBitmaps(touchgfx::Bitmap(BITMAP_CLEAR_ID), touchgfx::Bitmap(BITMAP_CLEAR_ID));
    clearButton.setAction(buttonCallback);
    container1.add(clearButton);

    add(container1);
}

menuScreenViewBase::~menuScreenViewBase()
{

}

void menuScreenViewBase::setupScreen()
{

}

void menuScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &drinksButton)
    {
        //drinksShow
        //When drinksButton clicked show drinksContainer
        //Show drinksContainer
        drinksContainer.setVisible(true);
        drinksContainer.invalidate();
        //foodHide
        //When drinksButton clicked hide foodContainer
        //Hide foodContainer
        foodContainer.setVisible(false);
        foodContainer.invalidate();
    }
    if (&src == &foodButton)
    {
        //foodShow
        //When foodButton clicked show foodContainer
        //Show foodContainer
        foodContainer.setVisible(true);
        foodContainer.invalidate();
        //drinksHide
        //When foodButton clicked hide drinksContainer
        //Hide drinksContainer
        drinksContainer.setVisible(false);
        drinksContainer.invalidate();
    }
    if (&src == &tablesButton)
    {
        //tablesShow
        //When tablesButton clicked change screen to tablesScreen
        //Go to tablesScreen with screen transition towards East
        application().gototablesScreenScreenSlideTransitionEast();
    }
    if (&src == &finishOrderButton)
    {
        //finishOrderScreen
        //When finishOrderButton clicked change screen to tablesScreen
        //Go to tablesScreen with screen transition towards East
        application().gototablesScreenScreenCoverTransitionEast();
        //finishOrder
        //When finishOrderButton clicked call virtual function
        //Call finishOrder
        finishOrder();
    }
    if (&src == &fishButton)
    {
        //fishAdd
        //When fishButton clicked call virtual function
        //Call fishAdd
        fishAdd();
    }
    if (&src == &noodleButton)
    {
        //noodleAdd
        //When noodleButton clicked call virtual function
        //Call noodleAdd
        noodleAdd();
    }
    if (&src == &baconButton)
    {
        //baconAdd
        //When baconButton clicked call virtual function
        //Call baconAdd
        baconAdd();
    }
    if (&src == &steakButton)
    {
        //steakAdd
        //When steakButton clicked call virtual function
        //Call steakAdd
        steakAdd();
    }
    if (&src == &porkButton)
    {
        //porkAdd
        //When porkButton clicked call virtual function
        //Call porkAdd
        porkAdd();
    }
    if (&src == &tunaButton)
    {
        //tunaAdd
        //When tunaButton clicked call virtual function
        //Call tunaAdd
        tunaAdd();
    }
    if (&src == &beefNasiButton)
    {
        //beefNasiAdd
        //When beefNasiButton clicked call virtual function
        //Call beefNasiAdd
        beefNasiAdd();
    }
    if (&src == &teppanyakiButton)
    {
        //teppanyakiAdd
        //When teppanyakiButton clicked call virtual function
        //Call teppanyakiAdd
        teppanyakiAdd();
    }
    if (&src == &yangzhouButton)
    {
        //yangzhouAdd
        //When yangzhouButton clicked call virtual function
        //Call yangzhouAdd
        yangzhouAdd();
    }
    if (&src == &waterButton)
    {
        //waterAdd
        //When waterButton clicked call virtual function
        //Call waterAdd
        waterAdd();
    }
    if (&src == &colaButton)
    {
        //colaAdd
        //When colaButton clicked call virtual function
        //Call colaAdd
        colaAdd();
    }
    if (&src == &fantaButton)
    {
        //fantaAdd
        //When fantaButton clicked call virtual function
        //Call fantaAdd
        fantaAdd();
    }
    if (&src == &spriteButton)
    {
        //spriteAdd
        //When spriteButton clicked call virtual function
        //Call spriteAdd
        spriteAdd();
    }
    if (&src == &oranginaButton)
    {
        //oranginaAdd
        //When oranginaButton clicked call virtual function
        //Call oranginaAdd
        oranginaAdd();
    }
    if (&src == &schweppesButton)
    {
        //schweppesAdd
        //When schweppesButton clicked call virtual function
        //Call schweppesAdd
        schweppesAdd();
    }
    if (&src == &clearButton)
    {
        //clearOrder
        //When clearButton clicked call virtual function
        //Call clearOrder
        clearOrder();
    }
}