#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{

    system("cls");

    int a[7] = {4, 8, 6, 9, 5, 2, 7};
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum is " << sum;

    getch();
    return 0;
}