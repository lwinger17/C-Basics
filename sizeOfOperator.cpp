#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a variable, class, object, etc.
    //compile-time operator, not a run-time operator

    std::string name = "Bro"; //reference data type
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Bob", "Wade", "Mark"};


    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(grades[0]) << " elements\n";
    // each variable in array is worth 1 byte
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
    


    return 0;
}