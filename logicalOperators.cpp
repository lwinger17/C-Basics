#include <iostream>

int main() {
    // && = check if two conditions are true
    // || = check if at least one condition is true
    // ! = reverses logical state of operand

    int temp;

    bool sunny = true;

    std::cout << "Enter the temp: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The Temperature is decent.\n";
    }
    else if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is pretty bad.\n";
    }
    
    if(sunny){
        std::cout << "It is sunny outside.\n";
    }
    else if(!sunny){
        std::cout << "It is not sunny outside.\n";
    }
    return 0;
}