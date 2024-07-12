#include <iostream>

enum Day {Monday = 0, Tuesday = 1, Wednesday = 2, Thursday = 3, Friday = 4, Saturday = 5, Sunday = 6};
// if number isn't assigned the system will automatically assign starting at 0

int main(){
    // enums = user defined data type 
    //          consists of paired named - int constants

    Day today = Wednesday;

    switch(today){
        case Monday: std::cout << "It is Monday\n";
            break;
        case Tuesday: std::cout << "It is Tuesday\n";
            break;
        case Wednesday: std::cout << "It is Wednesday\n";
            break;
        case Thursday: std::cout << "It is Thursday\n";
            break;
        case Friday: std::cout << "It is Friday\n";
            break;
        case Saturday: std::cout << "It is Saturday\n";
            break;
        case Sunday: std::cout << "It is Sunday\n";
            break;

        // or you can do case 1: instead of the string
    }

    return 0;
}