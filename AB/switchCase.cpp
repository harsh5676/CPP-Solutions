#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int x = 3;

    switch (x)
    {

    default:
        cout << "Invalid Number";
        break;

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    case 3:
        cout << "Three";
        break;
    }

    getch();
    return 0;
}