#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main(){

    double balance = 20040.87;
    int choice = 0;

    do{
        std::cout << "----------------------------\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n\n";
        std::cout << "Enter a choice: \n";
        std::cin >> choice;

        std::cin.clear(); 
        //resets error flags
        fflush(stdin);
        //clears input buffer


        switch(choice){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                showBalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4: "See you later!";
                break;
            default: std::cout << "Invalid Input\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit(){
    double amount = 0;

    std::cout << "How much would you like to deposit?: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Invalid Amount\n";
    }
    return 0;
}

double withdraw(double balance){

    double amount = 0;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient funds\n";
    }
    else if(amount < 0){
        std::cout << "Invalid Amount\n";
        return 0;
    }
    else{
        return amount;
    }

    return 0;
}