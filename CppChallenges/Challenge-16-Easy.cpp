// https://www.reddit.com/r/dailyprogrammer/comments/q8aom/2272012_challenge_16_easy/

#include <algorithm>
#include <iostream>
#include <string>

std::string cleanString(std::string firstString, std::string secondString);

int main(int argc, char const *argv[])
{
    std::string firstString;
    std::string secondString;
    std::string cleaned;

    std::cout << "First String: ";
    getline(std::cin, firstString);
    std::cout << "Second String: ";
    getline(std::cin, secondString);

    cleaned = cleanString(firstString, secondString);
    std::cout << cleaned << std::endl;

    return 0;
}

std::string cleanString(std::string firstString, std::string secondString)
{
    for (int x = 0; x < secondString.size(); x++){
        firstString.erase(remove(firstString.begin(), firstString.end(), secondString[x]), firstString.end());
    }
    std::cout << firstString << std::endl;
    return firstString;
}