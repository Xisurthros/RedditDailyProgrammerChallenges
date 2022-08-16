// https://www.reddit.com/r/dailyprogrammer/comments/pr2xr/2152012_challenge_7_easy/

#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
#include <map>

std::map<char, std::string> charToMorseCode = {
    {'a', ".-"},{'b', "-..."},
    {'c', "-.-."},{'d', "-.."},
    {'e', "."},{'f', "..-."},
    {'g', "--."},{'h', "...."},
    {'i', ".."},{'j', ".---"},
    {'l', "-.-"},{'k', ".-.."},
    {'m', "--"},{'n', "-."},
    {'o', "---"},{'p', ".--."},
    {'q', "--.-"},{'r', ".-."},
    {'s', "..."},{'t', "-"},
    {'u', "..-"},{'v', "...-"},
    {'w', ".--"},{'x', "-..-"},
    {'y', "-.--"},{'z', "--.."},
    {' ', "/"},{'0',"-----"},
    {'1',".----"},{'2',"..---"},
    {'3',"...--"},{'4',"....-"},
    {'5',"....."},{'6',"-...."},
    {'7',"--..."},{'8',"---.."},
    {'9',"----."},{'.',".-.-.-"},
    {',',"--..--"},{'?',"..--.."},
    {'=',"-...-"},
};

std::map<std::string, char> morseCodeToChar = {
    {".-",'a'},{"-...",'b'},
    {"-.-.",'c'},{"-..",'d'},
    {".",'e'},{"..-.",'f'},
    {"--.",'g'},{"....",'h'},
    {"..",'i'},{".---",'j'},
    {"-.-",'l'},{".-..",'k'},
    {"--",'m'},{"-.",'n'},
    {"---",'o'},{".--.",'p'},
    {"--.-",'q'},{".-.",'r'},
    {"...",'s'},{"-",'t'},
    {"..-",'u'},{"...-",'v'},
    {".--",'w'},{"-..-",'x'},
    {"-.--",'y'},{"--..",'z'},
    {"/",' '},{"-----",'0'},
    {".----",'1'},{"..---",'2'},
    {"...--",'3'},{"....-",'4'},
    {".....",'5'},{"-....",'6'},
    {"--...",'7'},{"---..",'8'},
    {"----.",'9'},{".-.-.-",'.'},
    {"--..--",','},{"..--..",'?'},
    {"-...-",'='},
};

void textToMorseCode(std::string stringToConvert);
void morseCodeToText(std::string stringToConvert);

int main(int argc, char const *argv[])
{
    std::string item;
    std::string stringToConvert;
    std::cout << "Conver to String(s) or Morse Code(m): ";
    getline(std::cin, item);
    std::cout << "Enter: ";
    getline(std::cin, stringToConvert);
    if (item == "s"){
        morseCodeToText(stringToConvert);
    } else if (item == "m"){
        textToMorseCode(stringToConvert);
    }

    return 0;
}

void textToMorseCode(std::string stringToConvert)
{
    std::string converted;
    std::transform(stringToConvert.begin(), stringToConvert.end(), stringToConvert.begin(),[](unsigned char c){ return std::tolower(c); });

    for (int x = 0; x < stringToConvert.size(); x++){
        char item = stringToConvert[x];
        converted += charToMorseCode[item];
        converted += " ";
    };
    std::cout << converted << std::endl;
}

void morseCodeToText(std::string stringToConvert)
{
    std::string converted;

    size_t last = 0;
    size_t next = 0;
    std::string delimiter = " ";
    while ((next = stringToConvert.find(delimiter, last)) != std::string::npos) {
        converted += morseCodeToChar[stringToConvert.substr(last, next-last)];
        last = next + 1;
    } 
    converted += morseCodeToChar[stringToConvert.substr(last)];
    std::cout << converted << std::endl;
}