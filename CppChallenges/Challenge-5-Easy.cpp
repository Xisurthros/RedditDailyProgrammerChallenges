// https://www.reddit.com/r/dailyprogrammer/comments/pnhyn/2122012_challenge_5_easy/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>

int main(int argc, char const *argv[])
{

    std::vector<std::string> arr;

    std::fstream newfile;

    std::string username;
    std::string password;

    std::cout << "Username: ";
    getline(std::cin, username);
    std::cout << "Password: ";
    getline(std::cin, password);


    newfile.open("Challenge-5-Easy.txt",std::ios::in);
    if (newfile.is_open()){
        std::string output;

        while (getline(newfile, output)){
            std::string data = output.substr(0, output.find(": "));
            arr.push_back(data);
        }

        newfile.close();
    }

    if (arr[0] == username && arr[1] == password){
        std::cout << username << " has logged in!" << std::endl;
    } else{
        std::cout << "Invalid username or password " << std::endl;
    }
    return 0;
}