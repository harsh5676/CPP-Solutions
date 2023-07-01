#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    system("cls");

    int A[10] = {2, 4, 6, 8, 10, 12};

    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}