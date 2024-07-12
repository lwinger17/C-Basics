#include <iostream>

int main(){
    /*Dynamic Memory = memory that is allocated after the program
                        is already compiled and running.
    'new' operator is used to allocate memory in a heap instead of a stack

    useful for when we don't know how much memory we need.
    - makes program more flexible, especially when taking user input
    */

    int *pNum = NULL;

    pNum = new int;

    *pNum = 22;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;
    // frees up memory at this address

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades should we enter in?: ";
    std::cin >> size;

    pGrades = new char[5];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i]; 
    }
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}