#ifndef TABLESSCREENVIEW_HPP
#define TABLESSCREENVIEW_HPP

#include <gui_generated/tablesscreen_screen/tablesScreenViewBase.hpp>
#include <gui/tablesscreen_screen/tablesScreenPresenter.hpp>

class tablesScreenView : public tablesScreenViewBase
{
public:
    tablesScreenView();
    virtual ~tablesScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setSelectedTableOne();
    virtual void setSelectedTableSecond();
    virtual void setSelectedTableThird();
    virtual void setSelectedTableFourth();
protected:
    int16_t tableOne = 1;
    int16_t tableSecond = 2;
    int16_t tableThird = 3;
    int16_t tableFourth = 4;


};

#endif // TABLESSCREENVIEW_HPP
