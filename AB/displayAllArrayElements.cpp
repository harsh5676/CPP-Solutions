#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int A[] = {2, 4, 6, 8, 10};

    for (int x : A)     // This means for each x in A
    {
        cout << x << " ";
    }

    getch();
    return 0;
}