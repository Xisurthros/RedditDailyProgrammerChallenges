// https://www.reddit.com/r/dailyprogrammer/comments/pserp/2162012_challenge_8_easy/

#include <iostream>
#include<windows.h>
#include <sstream>
#include <string>

int main(int argc, char const *argv[])
{
    int bottles = 99;
    for (int x = 0; x <= bottles;){
        std::ostringstream oss;
        oss << bottles << " bottles of beer on the wall! " << bottles << " of beer! " << " Take one down pass it around! " << bottles -1 << " bottles of beer on the wall!";
        std::string lyrics = oss.str();
        std::cout << "\r\r\r" << lyrics << std::flush;
        bottles -= 1;
        Sleep(500);
        if (bottles == 0){
            std::cout << "\n" << std::endl;
            std::cout << "No more bottles of beer on the wall" << std::endl;
            break;
        }
    }
    return 0;
}