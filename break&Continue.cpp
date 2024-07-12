#include <iostream>

int main(){

    // break = breaks out of loop
    // continue = skips to next iteration

    for(int i = 1; i <= 20; i++){
        if(i == 14){
            break; 
            // stops the loop at 14
        }
        if (i == 5){
            continue;
            // skips 5 and continues
        }
        std::cout << i << '\n';
    }


    return 0;
}