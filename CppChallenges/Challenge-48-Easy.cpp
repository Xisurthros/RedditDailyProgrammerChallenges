// https://www.reddit.com/r/dailyprogrammer/comments/t78m8/542012_challenge_48_easy/
#include <iostream>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(arr)/sizeof(int);
    int temp;
    for (int x = 0; x < size; x++){
        if (arr[x] % 2 ==0){
            continue;
        } else {
            for (int y = x + 1; y < size; y++){
                if (arr[y] % 2 == 0){
                    temp = arr[x];
                    arr[x] = arr[y];
                    arr[y] = temp;
                }
            }
        }
    }
    for (int val = 0; val < size; val++){
        std::cout << arr[val] << std::endl;
    }
}