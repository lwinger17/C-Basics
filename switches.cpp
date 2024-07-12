#include <iostream>

int main(){
    // switch = alternative to using multiple else if statements

    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "January";
            break;
        case 2:
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        default:
            std::cout << "Please only enter a number between (1-12)";
    }

//second example

char grade;

std::cout << "What letter grade did you get?: ";
std::cin >> grade;

switch(grade){
    case 'A':
        std::cout << "Nice Job!";
        break;
    case 'B':
        std::cout << "Almost There!";
        break;
    case 'C':
        std::cout << "Nice!";
        break;
    case 'D':
        std::cout << "Could've tried harder!";
        break;
    case 'F':
        std::cout << "Disappointed!";
        break;  
    default:
        std::cout << "Invalid, Only enter grades (A-F)";
}


return 0;
}