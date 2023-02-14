#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <climits>

using namespace std;

int main()
{
    system("cls");

    int A[10] = {2, 4, 6, 8, 12, -3, 5, 7, 9, 11};

    int min = INT_MAX;

    for (auto x : A)
    {
        if (x < min)
            min = x;
    }

    cout << "Minimum Number is " << min << endl;

    getch();
    return 0;
}