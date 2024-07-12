#include <iostream>

int main(){

    //nested loop = loop inside of a loop

    int rows;
    int columns;
    char symbol;

    std::cout << "Lets make a rectangle! " << '\n';
    std::cout << " ------------------------------ " << '\n';

    std::cout << "How many rows do you want?: ";
    std::cin >> rows;

    std::cout << "How many columns do you want?: ";
    std::cin >> columns;

    std::cout << "What symbol should we use?: " << '\n';
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j <= columns; j++){
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}