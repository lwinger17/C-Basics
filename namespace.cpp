#include <iostream>

//namespace = provides a solution to prevent name conflicts,
//namespace allows identical named entities


namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    // using namespace first;
    // ^ uses namespace first so x = 0 isn't necessary

    int x = 0;

    std::cout << x << '\n'; // x in main
    std::cout << first::x; // x in first

    return 0;
}