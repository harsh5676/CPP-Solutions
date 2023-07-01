#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");

    string str = "today";

    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        // cout << *it;
        *it = *it - 32; // To make the characters capital or uppercase. Difference between ASCII Codes.
    }

    cout << str;

    // Using for Loop Only

    /*
    for (int i = 0; str[i]!='\0'; i++)
    {
        // cout<<str[i];
        str[i]=str[i]-32; // To make the characters capital or uppercase. Difference between ASCII Codes.
    }
    cout<<str;
    cout << endl;
    */

    return 0;
}