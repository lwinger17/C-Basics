#include <iostream>

class Stove{
    private:
        int temperature = 360;
    public:
        int getTemperature(){
            return temperature;
        }
    void setTemperature(int temperature){
        if(temperature < 0){
            this -> temperature = 0;
        }
        else if(temperature > 500){
            this -> temperature = 500;
        }
        else{
            this->temperature = temperature;
        }
        this->temperature = temperature;
    }

};

int main(){
    //Abstraction = hides unnecessary data from outside a class
    // getter = makes a private attribute readable
    // setter = makes a private attribute writable

    Stove stove;
    stove.setTemperature(400);
    std::cout << "The temp of the oven is " << stove.getTemperature() << '.\n';

    return 0;
}