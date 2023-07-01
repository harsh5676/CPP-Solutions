#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");

    string str;

    cout << "Enter a String - ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        /* Upper To Lower Case */

        // if (str[i] >= 65 && str[i] <= 90)
        // {
        //     str[i] = str[i] + 32;
        // }

        /* Lower To Upper Case */

        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str << endl;

    return 0;
}