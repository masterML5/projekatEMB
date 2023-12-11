#ifndef TABLESSCREENPRESENTER_HPP
#define TABLESSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <touchgfx/hal/types.hpp>

using namespace touchgfx;

class tablesScreenView;

class tablesScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    tablesScreenPresenter(tablesScreenView& v);

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

     void setSelectedTable(int16_t selectedTable)
    {
        model->setSelectedTable(selectedTable);
    }
    int getSelectedTable()
    {
        return model->getSelectedTable();
    }
    void setTotalPrice(float total, int16_t table)
    {
         model->setTotalPrice(total, table);
    }
    float getTotalPrice(int16_t table)
    {
         return model->getTotalPrice(table);
    }

    virtual ~tablesScreenPresenter() {}

private:
    tablesScreenPresenter();

    tablesScreenView& view;
};

#endif // TABLESSCREENPRESENTER_HPP
