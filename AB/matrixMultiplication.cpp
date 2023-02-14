#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int a[100][100], b[100][100], c[100][100];
    int r1, r2, r3, c1, c2, c3;

    cout << "Matrix 1 " << endl;
    cout << "Number of Rows - ";
    cin >> r1;
    cout << "Number of Columns - ";
    cin >> c1;

    cout << endl
         << "Matrix 2 " << endl;
    cout << "Number of Rows - ";
    cin >> r2;
    cout << "Number of Columns - ";
    cin >> c2;

    if (r1 == c2)
    {
        cout << endl
             << "Multiplication between the Matrices are possible." << endl;
    }
    else
    {
        cout << endl
             << "Multiplication between the Matrices are not possible." << endl;
        return 0;
    }

    cout << endl
         << "Enter Matrix 1 details" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter Number at a" << i << j << " - ";
            cin >> a[i][j];
        }
    }

    cout << endl
         << "Enter Matrix 2 details" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter Number at b" << i << j << " - ";
            cin >> b[i][j];
        }
    }

    getch();
    return 0;
}