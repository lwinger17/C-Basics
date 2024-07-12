#include <iostream>

void swap(std::string &x, std::string &y);
//& prevents copies from being made
//& is a reference

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    // we need to swap these two variables
    std::string temp;

   swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}