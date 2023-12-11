#include <gui/tablesscreen_screen/tablesScreenView.hpp>
#include <touchgfx/hal/types.hpp>
tablesScreenView::tablesScreenView()
{

}

void tablesScreenView::setupScreen()
{
    tablesScreenViewBase::setupScreen();

    float totalPrice = 0;
    for(int i = 0; i < 5; i++){
        int16_t table = i;
        totalPrice = presenter->getTotalPrice(table);
        if(totalPrice > 0){
        switch (table) {
            case 1: {
                Unicode::snprintfFloat(tableOneAmountBuffer, TABLEONEAMOUNT_SIZE, "%.2f", totalPrice);
                tableOneAmount.invalidate();
                break;
            }
            case 2: {
                Unicode::snprintfFloat(tableSecondAmountBuffer, TABLESECONDAMOUNT_SIZE, "%.2f", totalPrice);
                tableSecondAmount.invalidate();
                break;
            }
            case 3: {
                Unicode::snprintfFloat(tableThirdAmountBuffer, TABLETHIRDAMOUNT_SIZE, "%.2f", totalPrice);
                tableThirdAmount.invalidate();
                break;
            }
            case 4: {
                Unicode::snprintfFloat(tableFourthAmountBuffer, TABLEFOURTHAMOUNT_SIZE, "%.2f", totalPrice);
                tableFourthAmount.invalidate();
                break;
            }
            default:
                break;

    }
            }
    }

}

void tablesScreenView::tearDownScreen()
{
    tablesScreenViewBase::tearDownScreen();
}

void tablesScreenView::setSelectedTableOne()
{
    presenter->setSelectedTable(tableOne);
}
void tablesScreenView::setSelectedTableSecond()
{
    presenter->setSelectedTable(tableSecond);
}
void tablesScreenView::setSelectedTableThird()
{
    presenter->setSelectedTable(tableThird);
}
void tablesScreenView::setSelectedTableFourth()
{
    presenter->setSelectedTable(tableFourth);
}
