#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "----- Temperature Conversion -----\n";
    std::cout << "F = Fahrenheit\n";\
    std::cout << "C = Celcius\n";

    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the Temp: __ C*\n = ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;

        std::cout << "Temperature is : " << temp << " F*\n";
    }

    if(unit == 'c' || unit == 'C'){
        std::cout << "Enter the Temp: __ F*\n = ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;

        std::cout << "Temperature is : " << temp << " C*\n";
    }

    else{
        "Choose either C or F.\n";
    }

    return 0;
}