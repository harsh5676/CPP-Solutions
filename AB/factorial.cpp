#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int n, i = 1, fact = 1;

    cout << "Enter the number - ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is " << fact << endl;

    getch();
    return 0;
}