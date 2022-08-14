// https://www.reddit.com/r/dailyprogrammer/comments/pkw2m/2112012_challenge_3_easy/
#include <iostream>
#include <string>

std::string cipher(std::string user_input, int shift);

int main()
{
    std::string user_input;
    int shift;

    std::cout << "String: ";
    getline(std::cin, user_input);

    std::cout << "Shift: ";
    std::cin >> shift;

    std::cout << cipher(user_input, shift) << std::endl;
    
    return 0;
}

std::string cipher(std::string user_input, int shift)
{
    std::string result = "";
    for (int x = 0; x<user_input.length(); x++){
        if (isupper(user_input[x]+shift)){
            result += char(int(user_input[x] + shift - 65) % 26 + 65);
        } else {
            result += char(int(user_input[x] + shift - 97) % 26 + 97);
        }
    }
    return result;
}