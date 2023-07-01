#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");

    // Method - 1

    /*
    string str;
    int count = 0;


    cout << "Enter your String - " << endl;
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Length of the String - " << count << endl;
    */

    // Method - 2

    string str;
    int count = 0;

    cout << "Enter your String - " << endl;
    getline(cin, str);

    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }

    cout << "Length of the String - " << count << endl;

    return 0;
}