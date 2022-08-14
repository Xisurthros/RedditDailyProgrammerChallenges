#include <iostream>
#include <cmath>

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int square_num(int x, int y);
int root(int x);

int main(){
	std::cout << "CALCULATOR" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "To add numbers, select '+' " << std::endl;
	std::cout << "To subtract numbers select '-' " << std::endl;
	std::cout << "To multiply numbers select '*' " << std::endl;
	std::cout << "To divide numbers select '/' " << std::endl;
	std::cout << "To square/cube/etc, numbers, select '^' " << std::endl;
	std::cout << "To find the square root of a number, select 'r'" << std::endl;
	std::cout << "To quit press 'q'" << std::endl;

	int x;
	int y;
	char process;

	while (true){
		std::cout << "Operator: ";
		std::cin >> process;
		if (process != 'q') {
			if (process == 'r') {
				std::cout << "Num1: ";
				std::cin >> x;
			} else {
				std::cout << "Num1: ";
				std::cin >> x;
				std::cout << "Num2: ";
				std::cin >> y;
			}
		}
	
		switch(process){
			case '+':
				std::cout << addition(x, y) << std::endl;
				break;
			case '-':
				std::cout << subtraction(x, y) << std::endl;
				break;
			case '*':
				std::cout << multiplication(x, y) << std::endl;
				break;
			case '/':
				std::cout << division(x, y) << std::endl;
				break;
			case '^':
				std::cout << square_num(x, y) << std::endl;
				break;
			case 'r':
				std::cout << root(x) << std::endl;
				break;
			case 'q':
				break;
				return 0;
		}
	}
}

int addition(int x, int y){
	return x + y;
}
int subtraction(int x, int y){
	return x - y;
}
int multiplication(int x, int y){
	return x * y;
}
int division(int x, int y){
	return x / y;
}
int square_num(int x, int y){
	return pow(x, y);
}
int root(int x){
	return pow(x,0.5);
}