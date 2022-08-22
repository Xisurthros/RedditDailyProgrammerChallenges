// https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string name;
	std::string age;
	std::string username;

	std::cout << "Enter your name: ";
	getline(std::cin, name);
	std::cout << "Enter your age: ";
	getline(std::cin, age);
	std::cout << "Enter your Reddit username: ";
	getline(std::cin, username);

	std::cout << "Your name is " << name << ", you are " << age << " years old, and your username is " << username << std::endl;
	return 0;
}