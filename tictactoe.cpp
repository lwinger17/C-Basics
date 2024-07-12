#include <iostream>
#include <ctime>

void board(char *spaces);
void playerMove(char *spaces, char player);
void compMove(char *spaces, char comp);
bool winner(char *spaces, char player, char comp);
bool tie(char *spaces);

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char comp = 'O';
    bool running = true;

    srand(time(0)); // Initialize random number generator

    board(spaces);

    while(running){
        playerMove(spaces, player);
        board(spaces);
        if(winner(spaces, player, comp)){
            running = false;
            break;
        }
        else if(tie(spaces)){
            running = false;
            break;
        }

        compMove(spaces, comp);
        board(spaces);
        if(winner(spaces, player, comp)){
            running = false;
            break;
        }
        else if(tie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << "To play again restart the program.";

    return 0;
}

void board(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[0] << "   |  " << spaces[1] << "  |  " << spaces[2] << "   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[3] << "   |  " << spaces[4] << "  |  " << spaces[5] << "   " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << " " << spaces[6] << "   |  " << spaces[7] << "  |  " << spaces[8] << "   " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place your marker (1-9): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player; 
            break;
        }
        else{
            std::cout << "Spot already taken, try again." << std::endl;
        }
    }while(true);
}

void compMove(char *spaces, char comp){
    int number;
    do{
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = comp; 
            break;
        }
    }while(true);
}

bool winner(char *spaces, char player, char comp){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "You Win! :)" : std::cout << "You Lose! :( \n";

    } 
    else{
        return false;
    }
    return true;
}
bool tie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "It is a tie!\n";
    return true;
}