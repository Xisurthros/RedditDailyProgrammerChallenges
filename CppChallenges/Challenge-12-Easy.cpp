// https://www.reddit.com/r/dailyprogrammer/comments/pxs2x/2202012_challenge_12_easy/

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

int main(int argc, char const *argv[])
{
    std::string user_input;
    int x = 0;
    std::cout << "Enter: "; 
    getline(std::cin, user_input);

    sort(user_input.begin(), user_input.end());
    do{
        std::cout << user_input << std::endl;
        x++;
    }
    while(std::next_permutation(user_input.begin(), user_input.end()));
    std::cout << "Permutations: " << x << std::endl;
    return 0;
}