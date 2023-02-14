#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <climits>

using namespace std;

int main()
{
    system("cls");
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
    int max = INT_MIN;

    for (int i = 0; i <= 10; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    cout << max << endl;

    getch();
    return 0;
}