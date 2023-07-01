#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");

    string str, uname;
    int i, valid, invalid, unamel;

    cout << "Enter your E-mail address - ";
    cin >> str;

    i = (int)str.find('@'); // It will give output as long int. So, typecast it as integer.

    uname = str.substr(0, i);
    unamel = uname.length();

    for (int i = 0; uname[i] != '\0'; i++)
    {
        if ((uname[i] >= 65 && uname[i] <= 90) || (uname[i] >= 97 && uname[i] <= 122) || uname[i] == '.' || uname[i] == '_' || (uname[i] >= 48 && uname[i] <= 57)) // 48 to 57 are ASCII codes form 0 to 9.
        {
            valid++;
        }
        else
        {
            invalid++;
        }
    }

    if (unamel == valid)
    {
        cout << "Username is Valid." << endl;
        cout << "Username - " << uname << endl;
    }
    else
    {
        cout << "Invalid Username." << endl;
    }

    return 0;
}