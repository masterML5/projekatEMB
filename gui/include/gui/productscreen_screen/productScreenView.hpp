#ifndef PRODUCTSCREENVIEW_HPP
#define PRODUCTSCREENVIEW_HPP

#include <gui_generated/productscreen_screen/productScreenViewBase.hpp>
#include <gui/productscreen_screen/productScreenPresenter.hpp>

class productScreenView : public productScreenViewBase
{
public:
    productScreenView();
    virtual ~productScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PRODUCTSCREENVIEW_HPP
