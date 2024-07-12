#include <iostream>

// i++ = repeats one by one
// i += 2 = repeats in increments of 2
// i-- = goes in a reverse order


int main(){
    for(int i = 1; i <= 10; i++){
        std::cout << i << "\n";
    }
    std::cout << "This is how you count up!";

    for(int i = 1; i <= 10; i+= 2){
        std::cout << i << "\n";
    }
    std::cout << "This is how you increment!";

    for(int i = 10; i >= 1; i--){
        std::cout << i << "\n";
    }
    std::cout << "This is how you count down!";

    return 0;
}