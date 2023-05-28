#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    /* Code to find out the length of the String */

    char s[100];
    // char *s;

    cout << "Enter a String - ";
    // cin >> s;    // It will not take input with white spaces.
    cin.getline(s, 100); // It will take multiple words and white spaces as input.

    cout << "Length of the string - " << strlen(s) << endl;

    return 0;
}