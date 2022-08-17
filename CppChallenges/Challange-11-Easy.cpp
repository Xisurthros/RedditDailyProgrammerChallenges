// https://www.reddit.com/r/dailyprogrammer/comments/pwons/2192012_challenge_11_easy/

#include <iostream>

int dayOfWeek(int y, int m, int d);

int main(int argc, char const *argv[])
{
    int y,m,d;
    std::cout << "Enter the date (1-31): ";
    std::cin >> d;
    std::cout << "Enter the month (1-12): ";
    std::cin >> m;
    std::cout << "Enter the year (yyyy): ";
    std::cin >> y;

    switch(dayOfWeek(y,m,d)){
        case 0: std::cout << "\nSunday\n";
        break;
        case 1: std::cout << "\nMonday\n";
        break;
        case 2: std::cout << "\nTuesday\n";
        break;
        case 3: std::cout << "\nWednesday\n";
        break;
        case 4: std::cout << "\nThursday\n";
        break;
        case 5: std::cout << "\nFriday\n";
        break;
        case 6: std::cout << "\nSaturday\n";
        break;
    }
    return 0;
}

int dayOfWeek(int y, int m, int d)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;   
}