// https://www.reddit.com/r/dailyprogrammer/comments/quli5/3132012_challenge_23_easy/

#include <iostream>
#include <list>
#include <string>
#include <iterator>

int main() 
{
    std::list<std::string> lst1 = { "1", "2", "3", "4" };

    for (const auto &s : lst1 ) std::cout << s << ' ';
    std::cout << std::endl;

    auto middle = std::next( lst1.begin(), lst1.size() / 2 );

    std::list<std::string> lst2( lst1.begin(), middle ); 

    std::list<std::string> lst3( middle, lst1.end() );

    for (const auto &s : lst2 ) std::cout << s << ' ';
    std::cout << std::endl;

    for (const auto &s : lst3 ) std::cout << s << ' ';
    std::cout << std::endl;
    return 0;
}