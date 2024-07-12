#include <iostream>

int main(){

    // foreach = eases traversal over iterable dataset
    // less flexible

    std::string students[] = {"Bill", "Bob", "Tom", "Wade"};

    int grades[] = {23, 100, 67, 98};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    for(int grade : grades){
        std::cout << grade << '\n';
    }



    return 0;
}