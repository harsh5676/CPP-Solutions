#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int n, i, x = 0;
    int a[100];

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (x = n - 1; x >= 0; x--)
    {
        cout << a[x] << " ";
    }

    getch();
    return 0;
}