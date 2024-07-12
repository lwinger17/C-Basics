#include <iostream>

double square(double length);
// replace void with double because the function is returning a double

double cube(double length);

std::string concatStrings(std::string string1, std::string string2);


int main(){

    // return = to return a value back to where encompassing function was called

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "First Example\n";

    std::cout << " Area: " << area << "cm^2\n";
    std::cout << " Volume: " << volume << "cm^3\n\n";

    std::cout << "Second Example\n";

    std::string firstName = "Lucas";
    std::string lastName = "IDK";
    std::string fullName = concatStrings(firstName, lastName);
    std::cout << " Full Name: " << fullName << "\n";

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}