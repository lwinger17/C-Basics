#include <iostream>
#include <string>

int main(){

    std::string name;

    std::cout << "Enter your gmail (dont include @gmail.com): ";
    getline(std::cin, name);

    // name.clear();
    // clears the name you entered 

    name.append("@gmail.com");
    // adds @gmail.com to the end of your name

    std::cout << name.at(0);
    // retrieved first character in the name

    name.insert(0, "N");
    // inserts "N" at the beginning of the name

    std::cout << name.find(' ');
    // looks for how many spaces are in the name

    name.erase(1,3);
    // erases 3 characters from the second to the fourth

    if (name.length() > 20){
        std::cout << "Your email is too long, please shorten it.";
    }
    else if(name.empty()){
        std::cout << "You didn't enter anything.";
    }

    else{
        std::cout << "Welcome " << name << "!" ;
    }
    return 0;
}