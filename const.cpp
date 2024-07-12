#include <iostream>

int main() {
    const double PI = 3.14;
    // const prevents a change, read only
    // for example the amount of seats in a room
    double radius = 10;
    double circumference = 2 * PI * radius;
    
    std::cout << circumference << "cm";


    return 0;
}