// https://www.reddit.com/r/dailyprogrammer/comments/qheeu/342012_challenge_17_easy/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	    int height = 0;
    cout << "Enter a height: ";
    cin >> height;
    for(int i = 1; i <= height; i++){
	    for(int j = 1; j <= i*i; j++)
		    cout << "@";
	    cout << endl;
    }
    return 0;
}