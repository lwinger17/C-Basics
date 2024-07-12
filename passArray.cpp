#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {48.78 , 67.99 , 47.99 , 23.02};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total << '\n';

    return 0;
}

double getTotal(double prices[], int size){

    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}