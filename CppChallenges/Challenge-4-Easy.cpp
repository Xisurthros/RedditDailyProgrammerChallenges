// https://www.reddit.com/r/dailyprogrammer/comments/pm6oj/2122012_challenge_4_easy/
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <math.h>
#include <vector>

std::vector<std::string> passwordGeneration(int numLetters, int numPasswords);

int main(int argc, char *argv[])
{
    int numLetters;
    int numPasswords;

    //get user input
    std::cout << "Enter number of passwords: ";
    std::cin >> numPasswords;
    std::cout << "Enter number of letters: ";
    std::cin >> numLetters;

    for (int x = 0; x < numPasswords; x++){
        std::cout << passwordGeneration(numLetters, numPasswords)[x] << std::endl;
    }
}

std::vector<std::string> passwordGeneration(int numLetters, int numPasswords)
{
    std::string password;
    std::vector<std::string> passwordList;
    int i;
    int j;

    srand(time(NULL));

    //generate passwords
    for (j = 0; j < numPasswords; ++j){
        for (i = 0; i < numLetters; ++i){
            password = password + static_cast<char>((rand() % 93) + 33);
        };
        passwordList.push_back(password);
        password.clear();
    };


    std::cout << "\n\n" << std::endl;
    return passwordList;
}