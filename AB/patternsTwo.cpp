#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    getch();
    return 0;
}