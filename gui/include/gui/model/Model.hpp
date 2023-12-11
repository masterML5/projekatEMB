#ifndef MODEL_HPP
#define MODEL_HPP
#include <touchgfx/hal/types.hpp>

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }
    void setSelectedTable(int16_t selectedTable)
    {
        table = selectedTable;
    }
    int16_t getSelectedTable()
    {
        return table;
    }
    void setTotalPrice(float total, int16_t table)
    {
        switch(table){
            case 1:{
                totalPriceTableOne = total;
                break;
            }
            case 2:{
                totalPriceTableSecond = total;
                break;
            }
            case 3:{
                totalPriceTableThird = total;
                break;
            }
            case 4:{
                totalPriceTableFourth = total;
                break;
                }
            default:
                break;
        }
    }
    float getTotalPrice(int16_t table)
    {

        switch(table){
            case 1:{
                return totalPriceTableOne;

            }
            case 2:{
                return totalPriceTableSecond ;

            }
            case 3:{
                return totalPriceTableThird;

            }
            case 4:{
                return totalPriceTableFourth;

            }
            default:
                return 0;
        }
    }



    void tick();
protected:
    ModelListener* modelListener;
    int16_t table;
    float totalPriceTableOne = 0;
    float totalPriceTableSecond = 0;
    float totalPriceTableThird = 0;
    float totalPriceTableFourth = 0;
};

#endif // MODEL_HPP
