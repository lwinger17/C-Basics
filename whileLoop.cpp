#include <iostream>

int main(){

    std::string name;

    // while the name is empty it will repeat until a name is added 
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    // example of infinite loop 
   // while ( 1 == 1){
   //     std::cout << "This is Torture! ";
   // }

    std::cout << "Hello " << name;

    return 0;
}