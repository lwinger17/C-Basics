#include <iostream>

int main(){
    // memory address = a location in memory where data is stored
    // can be accessed with & ( address-of operator)

    std::string name = "Lucas";
    int age = 22;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    //addresses can change
    // these are called hexadecimals , they can be converted into normal decimals

    return 0;
}