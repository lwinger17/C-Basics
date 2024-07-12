#include <iostream>

// multidimensional = arrays built of arrays

int main(){

std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                        {"Corvette", "Equinox", "Silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};
// [rows][columns]

int rows = sizeof(cars)/sizeof(cars[0]);
int columns = sizeof(cars[0]/sizeof(cars[0][0]));

//2 dimensional array
// each element is an array
for(int i = 0; i < rows; i++){
    //std::cout << cars[i] << '\n';
    // prints addresses
    for(int j = 0; j < columns; j++){
        std::cout << cars[i][j] << " ";
    }
    std::cout << '\n';
}



    return 0;
}