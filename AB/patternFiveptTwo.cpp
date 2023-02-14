#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    getch();
    return 0;
}