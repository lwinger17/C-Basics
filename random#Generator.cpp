#include <iostream>
#include <ctime>

int main(){
    // FYI, This is pseudo random, not truly random

    srand(time(NULL));

    int sides;
    int attempts;

    std::cout << "How many sides does your dice have?: ";
    std::cin >> sides;

    std::cout << "How many times should I roll this dice?: ";
    std::cin >> attempts;


    for (int i = 0; i < attempts; i++) {
        int num = (rand() % sides) + 1;
        // % shows the limit so 6 would be a 6 sided die
        // The +1 is added to remove 0 as a number option

        std::cout << "Roll " << i + 1 << ": " << num << '\n';
    }

    return 0;
}
