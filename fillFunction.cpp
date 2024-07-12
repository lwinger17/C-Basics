#include <iostream>

int main(){
    // fill() = fils range of elements with a specified value
    // (begin, end, value)

    const int size = 50;

    std::string foods[size];

    fill(foods, foods + (size/3), "Sushi");
    // () isnt necessary, just makes it easier to read
    fill(foods + (size/3)*2, foods + (size/3)*2, "Chicken" );
    fill(foods + (size/3)*2, foods + size, "Steak" );

    for(std::string food : foods){
        std::cout << food << '\n';
    }
    return 0;
}