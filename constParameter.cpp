#include <iostream>

void printInfo(const std::string name, const int age);

int main(){


    // const parameter = read only, makes the code more secure and conveys intent
    // useful for references and pointers

    // remember & can be changed while const cannot
    std::string name = "Lucas";
    int age = 22;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}