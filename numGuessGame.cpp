#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    tries = 0;

    std::cout << "Number Guessing game!";
    std::cout << "---------------------\n";

    do {
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high! Try again.\n";
        }
        else if(guess < num){
            std::cout << "Too low! Try again.\n";
        }
        else{
            std::cout << "Congratulations! You guessed correctly!\n It took you " << tries << " attempts!";
        }
    } while(guess != num);

    std::cout << "---------------------\n";
    return 0;
}