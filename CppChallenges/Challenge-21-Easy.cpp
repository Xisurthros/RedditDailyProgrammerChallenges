// https://www.reddit.com/r/dailyprogrammer/comments/qp3ub/392012_challenge_21_easy/

#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    std::next_permutation(s.begin(), s.end());
    std::cout << s << std::endl;
}