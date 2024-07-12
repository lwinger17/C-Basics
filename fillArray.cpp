#include <iostream>
#include <string>

int main(){

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    std::cout << "Enter 5 of your favorite food items. \n";
    std::cout << "Or press 'q' to quit. \n";
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "#" << i + 1<< ": ";
        std::getline(std::cin, temp);

        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food: \n";

    for (int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << "\n";
    }

    return 0;
}