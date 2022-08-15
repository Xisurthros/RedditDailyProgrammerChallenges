// https://www.reddit.com/r/dailyprogrammer/comments/pp53w/2142012_challenge_6_easy/

#include <iostream>
#include <cstdlib> 

int main(int argc, char const *argv[])
{
    int max_terms = 200;
    __float128 small = 1e-300;
    long double Sm = 1;
    long double sum = 1;

    for(int m = 1; m < max_terms; m++){

        Sm *= m/(2.0*m+1);
        sum += Sm;
    };

    std::cout.precision(30);
    std::cout << 2*sum << std::endl;
    return 0;
}
