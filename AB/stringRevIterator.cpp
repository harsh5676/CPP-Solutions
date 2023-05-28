#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");

    string str = "today";

    string::reverse_iterator it;

    for (it = str.rbegin(); it != str.rend(); it++)
    {
        cout << *it;
    }

    // cout << str;
    cout << endl;

    return 0;
}