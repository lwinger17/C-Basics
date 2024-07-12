#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(std::string topping1){
        this -> topping1 = topping1;
    }
     Pizza(std::string topping1, std::string topping2){
        this -> topping1 = topping1;
        this -> topping2 = topping2;
    }
};

int main(){
    // overloaded constructors = multiple constructors with same name but different parameters

    Pizza pizza1("pepperoni");
    Pizza pizza2("pineapple", "sausage");

    std::cout << pizza1.topping1 << '\n';

    return 0;
}