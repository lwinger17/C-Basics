#include <iostream>

void walk(int steps);
int factorial(int num);

int main(){
    // recursion = technique where a function invokes itself rrom within
        /*
        Iterative vs recursive
        walk is one example, factorial is another

        advantages = cleaner and less code
        disadvantages = more memory usage
        */

    walk(50);

    std::cout << factorial(10);

    return 0;
}

//iterative aproach
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step.\n";
    }
}

/*
int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
}
    return result;
}
*/

/*
//recursive approach
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step.\n";
        walk(steps - 1);
    }
}
*/

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}