#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int n, i;

    cout << "Enter a number - ";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << i * n << endl;
    }

    getch();
    return 0;
}