#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int A[5] = {2, 4, 6, 8, 10};
    int *p = A, *q = &A[4];

    cout << p - q;

    getch();
    return 0;
}