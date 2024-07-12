#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "! Calculator !" << '\n' << '\n';
    std::cout << "----------------------------------------";
    
    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter operator ( + , - , * , / ): ";
    std::cin >> op;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default: 
            std::cout << "There was an issue with your operator.";
            break;
    }

    std::cout << "----------------------------------------";


    return 0;
}