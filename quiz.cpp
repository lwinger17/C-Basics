#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?: "};

    std::string options[][4] = {{"A. 1969","B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido van Rossum","B. Bjarne Stroustrup", "C. John Carmack", "D. Steve Jobs"}, 
                               {"A. C","B. Python", "C. Java", "D. C#"},
                               {"A. Yes","B. No", "C. Depends on the day", "D. Of course"}};  

    char answerKey[] = {'C','B','A','B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "---------------" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "---------------" << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';

        }
        std::cin >> guess;
        guess = toupper(guess);
        // capitalizes character

        if(guess == answerKey[i]){
            std::cout << "Correct\n";
            score++;
        }
        else{
            std::cout << "WRONG!!!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';

        }
    }

    std::cout << "---------------" << '\n';
    std::cout << "Result: \n";
    std::cout << "---------------" << '\n';
    std::cout << "Correct Quesses: " << score << '\n';
    std::cout << "Out of: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << " %" << '\n';

    return 0;
}