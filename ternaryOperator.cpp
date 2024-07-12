#include <iostream>

int main(){
    //replacement to an if else statement
    
    int grade = 75;

    grade >= 60 ? std::cout << "You passed!" << std::endl : std::cout << "You failed!" << std::endl;

//second example

    int number = 9;
    number % 2 ? std::cout << "Odd" : std::cout << "Even";
    // T or F, if divisible by 2 = 2, if not = flase
    
// Example of Boolean variable = T or F
    bool hungry = true;

    hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry";
    // or
    //std::cout (hungry ? "You are hungry " : "You are Full");
    return 0;
}