#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
// names can be shared but function must be unique
// this difference is called a function signature

void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza("pepperoni");

    bakePizza("sausage", "pineapple");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your pizza with " << topping1 << "!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << "!\n";
}

