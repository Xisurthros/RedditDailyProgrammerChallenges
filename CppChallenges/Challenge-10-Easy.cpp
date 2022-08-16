// https://www.reddit.com/r/dailyprogrammer/comments/pv98f/2182012_challenge_10_easy/

#include <algorithm>
#include <iostream>
#include <string>
#include <list>

bool numberVaildation(std::string phoneNumber);

std::list<std::string> vailNumbers = {
    "xxxxxxxxxx", "xxx-xxx-xxxx",
    "xxx xxx xxxx", "(xxx) xxx.xxxx",
    "(xxx)xxx.xxxx", "xxx.xxx.xxxx",
    "(xxx)xxx-xxxx", "(xxx) xxx-xxxx",
    "xxx xxx-xxxx", "xxx-xxxx", "xxx xxxx",
    "xxx.xxxx"
};

int main(int argc, char const *argv[])
{
    std::string phoneNumber;

    std::cout << "Enter: ";
    getline(std::cin, phoneNumber);
    numberVaildation(phoneNumber);
    if (numberVaildation(phoneNumber)){
        std::cout << "Valid phone number" << std::endl;
    } else {
        std::cout << "Invalid phone number" << std::endl;
    }
    return 0;
}

bool numberVaildation(std::string phoneNumber)
{
    size_t last = 0;
    size_t next = 0;
    for (int x = 0; x < 10; x++){
        std::replace(phoneNumber.begin(), phoneNumber.end(), char('0'+x), 'x');
    }
    if (std::find(std::begin(vailNumbers), std::end(vailNumbers), phoneNumber) != std::end(vailNumbers)){
        return true;
    } else {
        return false;
    }
}