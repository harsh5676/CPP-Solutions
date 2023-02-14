#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int a[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7, max;
    max = a[0];
    for (int i = 0; i < 7; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Maxmium no is " << max;

    getch();
    return 0;
}