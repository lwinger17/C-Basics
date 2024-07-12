#include <iostream>

template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}
// T and U is just an example, can be whatever
// in this example it is accepting both double and int
// auto lets the compiler determine return type

int main(){
    // function template = describes what a function looks like
    // used to generate overload functions, accepts many functions

    std::cout << max(1, 2.6) << '\n';

    return 0;
}