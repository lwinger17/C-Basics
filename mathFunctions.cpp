#include <iostream>

int main(){
    double x = 3;
    double y = 4;
    double z;

    //max and min
    z = std::max(x,y);
    z = std::min(x,y);

    //raise to the power of 3 ( 2^3)
    z = pow(2,3);
    //square root of 9
    z = sqrt(9);
    // absolute value
    z = abs(-3);
    //rounding x, ciel = highest rounding, floor = rounding down
    z = round(x);
    z = ceil(x);
    z = floor(x);

    std::cout << z;

    return 0;
}