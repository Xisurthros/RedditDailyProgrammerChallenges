// https://www.reddit.com/r/dailyprogrammer/comments/qr0hg/3102012_challenge_22_easy/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int size = 5;
    char list1[size];
    char list2[size];
    int counter;

    cout << "LIST 1" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter item #" << i+1 << ": ";
        cin >> list1[i];
    }

    cout << "LIST 2" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter item #" << i+1 << ": ";
        cin >> list2[i];
    }

    cout << "APPENDED LIST" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << list1[i] << " ";
    }

    cout << endl;

    

    for (int i = 0; i < size; i++)
    {
        counter = 0;
        for (int j = 0; j < size; j++)
        {
            if (list2[i] == list1[j])
            {
                counter++;
            }
        }

        if (counter == 0)
        {
            cout << list2[i] << " ";
        }
    }
    return 0;
}