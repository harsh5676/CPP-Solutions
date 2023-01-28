#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int n, i, sum = 0;

    cout << "Enter the number - ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of natural no is " << sum << endl;

    getch();
    return 0;
}