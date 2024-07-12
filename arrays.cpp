#include <iostream>

int main(){

    // array = data structure that can hold multiple values which are accessed by an index number

    std::string cars[3];
    // 3 is the size of the array
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";

    // can also be written as
    std::string car[] = {"Corevette", "Ford", "GMC"};
    // must all be same data type 

    //car[1] = "Buick";
    // this is to change one of the values


    std::cout << cars[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    // example 2

    std::cout << "Example 2: " << '\n';

    double prices[] = {5.00 , 7.90 , 5.78, 15.90};

    std::cout << prices[3] << '\n';
    std::cout << prices[0] << '\n';
    std::cout << prices[2] << '\n';

    return 0;
}