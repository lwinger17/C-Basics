#include <iostream>
#include <ctime>

char getPlayChoice();
char getCompChoice();
void showChoice(char choice);
void winner(char player, char comp);

int main() {
    char player;
    char comp;

    player = getPlayChoice();
    std::cout << "Your choice: \n";
    showChoice(player);

    comp = getCompChoice();
    std::cout << "Computer choice: \n";
    showChoice(comp);

    winner(player, comp);

    return 0;
}

char getPlayChoice() { 
    char player;
    std::cout << "Rock-Paper-Scissors\n";
    do {
        std::cout << "-------------------\n";
        std::cout << "r = rock \n";
        std::cout << "p = paper \n";
        std::cout << "s = scissors\n";
        std::cout << "Enter your choice: \n";
        std::cin >> player;
    } while(player!= 'r' && player!= 'p' && player!= 's');
    
    return player;
}

char getCompChoice() { 
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;

    }
}

void winner(char player, char comp){
    switch(player){
        case 'r':   if(comp == 'r'){
                        std::cout << "Tie\n";}
                    else if(comp == 'p'){
                        std::cout << "You lose\n";}
                    else{
                        std::cout << "You win\n";}
                    break;

         case 'p':   if(comp == 'p'){
                        std::cout << "Tie\n";}
                    else if(comp == 's'){
                        std::cout << "You lose\n";}
                    else{
                        std::cout << "You win\n";}
                    break;

         case 's':   if(comp == 's'){
                        std::cout << "Tie\n";}
                    else if(comp == 'r'){
                        std::cout << "You lose\n";}
                    else{
                        std::cout << "You win\n";}
                    break;
    }
}