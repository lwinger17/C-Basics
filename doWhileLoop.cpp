#include <iostream>

int main(){
    // do while loop = do a block of code and repeat if the condition is true

    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while(number < 0);

    std::cout << "The number is: " << number;

    return 0;
}