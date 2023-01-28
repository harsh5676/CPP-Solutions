#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int a = 10, b = 5;

    if (true)
    {
        int c = a + b;
        cout << c << endl;
    }
    {
        int d = a - b;
        if (true)
        {
            cout << d << endl;
        }
    }
    if (int e = a * b)
    {
        cout << e << endl;
    }

    getch();
    return 0;
}