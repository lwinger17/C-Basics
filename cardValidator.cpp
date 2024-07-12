#include <iostream>

// This is a credit card validator
// for this we will use the Luhn Algorithm
/*
1. Double every second digit from right to left, if doubled number is 2 digits split
2. Add all single digits from step 1
3. add all off numbered digits (right to left)
4. sum results
5. if step 4 is divisible by 10 it is valid
*/

//example
//Discover 6011000990139424

int getDigit(const int number);
int sumOddDigits(const std::string card);
int sumEvenDigits(const std::string card);

int main(){

    std::string card;
    int result = 0;

    std::cout << "Please enter a credit card number: \n";
    std::cin >> card;

    result = sumEvenDigits(card) + sumOddDigits(card);

    // step 5
    if(result % 10 == 0){
        std::cout << card << "is valid";
    }
    else{
        std::cout << card << "is invalid";
    }

    return 0;
}
// step 4
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}

// step 3
int sumOddDigits(const std::string card){
    int sum = 0;

    for(int i = card.size() - 1; i >= 0; i-=2){
        sum += card[i] - '0';

    }

    return sum;
}
// step 1
int sumEvenDigits(const std::string card){
    int sum = 0;

    for(int i = card.size() - 2; i >= 0; i-=2){
        sum += getDigit((card[i] - '0') * 2);

    }

    return sum;
}