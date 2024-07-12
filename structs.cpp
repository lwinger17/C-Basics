#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){

    // structs = structure that groups up related  variables under 1 name
    //           variables are known as "members"
    //           members can be accessed with "Class Member Access Operator"  

    student student1;
    student1.name = "Bill";
    student1.gpa = 3.4;
    student1.enrolled = true;

    student student2;
    student1.name = "Tom";
    student1.gpa = 2.2;
    student1.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}