#include <iostream>

int main(){
    
    //if statement = if something is true do something, 
    //               if not don't do anything

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "How does feeling like an adult feel?";
    }
    else if(age < 0){
        std::cout << "How are you alive!?";
    }
    else if(age >= 100){
        std::cout << "Wow, how did you manage to get here?";
    }
    else{
        std::cout << "You're still a kid!";
    }

    return 0;
}