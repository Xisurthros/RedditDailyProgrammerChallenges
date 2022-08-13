// https://www.reddit.com/r/dailyprogrammer/comments/pii6j/difficult_challenge_1/
#include <iostream>

int main()
{
	int top = 101;
	int bottom = 0;
	int attempts = 1;

	char reply;

	std::cout << "STARTING!" << std::endl;
	std::cout << "Higher = h\nLower = l\nCorrect = c" << std::endl;

	while (reply != 'c'){
		int guess = int((bottom+top)/2);
		std::cout << guess << std::endl;
		std::cout << "Higher, Lower or Correct?:  ";
		std::cin >> reply;
		if (reply == 'c'){
			printf("Computer took %i attempts", attempts);
			break;
		} else if (reply == 'h'){
			bottom = guess;
			attempts++;
		} else if (reply = 'l'){
			top = guess;
			attempts++;
		}
	}
	return 0;
}