#include <iostream>

int main(){

    // arithmetic operators = return the result of a specific operation (+, - , / , etc.)

    int students = 20;
    // can also use double instead of int
    
    //students = students + 1; OR
    //students += 1; OR
    students ++;

    //same but with - instead of +
    students --;
    
    //students = students * 2;
    students*=4;

    //students = students / 2;
    students/=5;

    // order comp follows = () then */ then +-
    int funTest = 6 - 5 + (4 * 3) / 2 * 5;

    int remainder = students % 2;
    //divide into groups of 2
    // finds if there are any remainders 

    std::cout <<"Students: " << students << '\n';

    std::cout << "Test: " << funTest << '\n';

    std::cout << "Remainder: "<< remainder;

    return 0;
}