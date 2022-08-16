// https://www.reddit.com/r/dailyprogrammer/comments/pu1rf/2172012_challenge_9_easy/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

void sortString(std::string user_input);

int main(int argc, char const *argv[])
{
    std::string user_input;
    std::cout << "Enter: ";
    getline(std::cin, user_input);
    sortString(user_input);
    return 0;
}

void sortString(std::string user_input)
{
    sort(user_input.begin(), user_input.end());
    std::cout << user_input << std::endl;
}