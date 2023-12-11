#ifndef MENUSCREENPRESENTER_HPP
#define MENUSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class menuScreenView;

class menuScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    menuScreenPresenter(menuScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();
    int getSelectedTable()
    {
            return model->getSelectedTable();
    }
    void setSelectedTable(int16_t table)
    {
        model->setSelectedTable(table);
    }
    float getTotalPrice(int16_t table)
    {
        return model->getTotalPrice(table);
    }
    void setTotalPrice(float total, int16_t table)
    {
        model->setTotalPrice(total, table);
    }


    virtual ~menuScreenPresenter() {}

private:
    menuScreenPresenter();

    menuScreenView& view;
};

#endif // MENUSCREENPRESENTER_HPP
