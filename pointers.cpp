#include <iostream>

int main() {

    // pointers = variable that stores a memory address of another variable
    // & - address of operator 
    // * - dereference operator

    std::string name = "Lucas";
    int age = 22;
    std::string freePizzas[5] = {"Pepperoni","Sausage","Cheese", "Pineapple", "Breakfast"};


    std::string *pName = &name;
    int *pAge = &age;
    std::string *FreePizzas = freePizzas;
    //freePizza is already an address


    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *freePizzas << '\n';

    return 0;
}