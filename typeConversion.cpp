#include <iostream>

int main() {
    // Implicit = automatic
    // Explicit = procede with new data type

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;

    std::cout << "Score:" << score << "%" << '\n';

    int x = 100;
    std::cout << "char: " << (char) x << std::endl;

    return 0;
}