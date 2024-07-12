#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void paintCar(Car &car, std::string color);
void printCar(Car car);

int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 1969;
    car1.color = "silver";

    car2.model = "Corvette";
    car2.year = 2004;
    car2.color = "black";

    paintCar(car1, "Blue");
    paintCar(car2, "Green");

    std::cout << &car1 << '\n';
    //  creates a copy so address is different
    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car car){
    std::cout << &car << '\n';
    std::cout << "Model: " << car.model << '\n';
    std::cout << "Year: " << car.year << '\n';
    std::cout << "Color: " << car.color << '\n';
}

void paintCar(Car &car, std::string color){
    car.color = color;
}