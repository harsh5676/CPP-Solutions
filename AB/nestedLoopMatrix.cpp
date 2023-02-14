#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    getch();
    return 0;
}