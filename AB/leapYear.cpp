#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int year;

    cout << "Enter year to check whether it is a leap year or not -" << endl;
    cin >> year;

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << "Leap Year";
        }
        else
        {
            cout << "Not a Leap Year";
        }
    }

    else if (year % 4 == 0)
    {
        cout << "Leap Year";
    }

    else
    {
        cout << "Not a Leap Year";
    }

    getch();
    return 0;
}