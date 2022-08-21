// https://www.reddit.com/r/dailyprogrammer/comments/qit0h/352012_challenge_18_easy/

#include <iostream>
#include <string>

std::string phoneNumber(std::string number);

int main(int argc, char const *argv[])
{
    std::cout << phoneNumber("1-800-COMCAST") << std::endl;
    return 0;
}

std::string phoneNumber(std::string number)
{
    static const char keypad[27] = "2223334445556667778889999";
    for (char& c: number){
        if(isalpha(c)){
            c=keypad[tolower(c)-'a'];
        }
    }
    number.insert(number.end()-4, '-');
    return number;
}