#include <iostream>

class Stove
{
private:
    double temperature;

public:
    std::string stove;

    void setTemperature(double temp)
    {
        this->temperature = temp;
    }

    double getTemp()
    {
        return this->temperature;
    }
};
