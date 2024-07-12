#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating.\n";
        }
        void drink(){
            std::cout << "This person is drinking.\n";
        }
        void sleep(){
            std::cout << "This person is sleeping.\n";
        }

};

int main(){

    //object = collection of attributes and methods
    //          can be used to mimic real world items, created from a class (blueprint)

    Human human1;
    Human human2;
    // human1 is an object

    human1.name = "Bob";
    human1.occupation = "Podcaster";
    human1.age = 30;

    human2.name = "Wade";
    human2.occupation = "Streamer";
    human2.age = 33;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n\n';

    human1.eat();

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.sleep();


    return 0;
}