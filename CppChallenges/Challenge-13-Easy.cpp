// https://www.reddit.com/r/dailyprogrammer/comments/pzo4w/2212012_challenge_13_easy/

#include <iostream>
#include <numeric>

int main(int argc, char const *argv[])
{
    int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int m, d;
    std::cout << "Enter(m,d): ";
    std::cin >> m >> d;
    std::cout << std::accumulate(std::begin(months), std::begin(months) + (m - 1), d);
    return 0;
}