#include <iostream>

int main(){
    // Null = special value that indicates no value

    // nullptr = null pointr literal, helps with determining if 
    // an address was successfully aligned with pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer = nullptr){
        std::cout << "address was not assigned" << '\n';
    }
    else{
        std::cout << "address was assigned" << '\n';
        std::cout << *pointer;
    }

    return 0;
}