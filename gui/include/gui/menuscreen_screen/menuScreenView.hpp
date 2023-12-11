#ifndef MENUSCREENVIEW_HPP
#define MENUSCREENVIEW_HPP
#include <touchgfx/hal/types.hpp>
#include <gui_generated/menuscreen_screen/menuScreenViewBase.hpp>
#include <gui/menuscreen_screen/menuScreenPresenter.hpp>

class menuScreenView : public menuScreenViewBase
{
public:
    menuScreenView();
    virtual ~menuScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fishAdd();
    virtual void noodleAdd();
    virtual void baconAdd();
    virtual void steakAdd();
    virtual void porkAdd();
    virtual void tunaAdd();
    virtual void beefNasiAdd();
    virtual void teppanyakiAdd();
    virtual void yangzhouAdd();
    virtual void waterAdd();
    virtual void colaAdd();
    virtual void fantaAdd();
    virtual void spriteAdd();
    virtual void oranginaAdd();
    virtual void schweppesAdd();
    virtual const char* getProductInfo();
    void addItem(int16_t&, const char*);
    virtual float calculateTotalPrice(const char*);
    virtual void finishOrder();
    virtual void clearOrder();
protected:
    int16_t table;
    int16_t fishCounter = 0;
    int16_t noodleCounter = 0;
    int16_t baconCounter = 0;
    int16_t steakCounter = 0;
    int16_t porkCounter = 0;
    int16_t tunaCounter = 0;
    int16_t beefNasiCounter = 0;
    int16_t teppanyakiCounter = 0;
    int16_t yangzhouCounter = 0;
    int16_t waterCounter = 0;
    int16_t colaCounter = 0;
    int16_t fantaCounter = 0;
    int16_t spriteCounter = 0;
    int16_t oranginaCounter = 0;
    int16_t schweppesCounter = 0;

    float fishPrice = 12.50;
    float noodlePrice = 8.75;
    float baconPrice = 15.20;
    float steakPrice = 20.50;
    float porkPrice = 18.90;
    float tunaPrice = 14.25;
    float beefNasiPrice = 10.75;
    float teppanyakiPrice = 22.80;
    float yangzhouPrice = 11.50;
    float waterPrice = 1.50;
    float colaPrice = 2.00;
    float fantaPrice = 2.10;
    float spritePrice = 1.90;
    float oranginaPrice = 2.30;
    float schweppesPrice = 2.20;

    float totalPrice = 0;


};

#endif // MENUSCREENVIEW_HPP
