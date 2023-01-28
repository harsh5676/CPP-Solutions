#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    char a = 128;
    cout << (int)a << endl;

    char b = 127;
    b++;
    cout << (int)b << endl;

    char c = -129;
    cout << (int)c << endl;

    char d = -128;
    d--;
    cout << (int)d << endl;

    int e = INT_MAX;
    e++;
    cout << (int)e << endl;

    getch();
    return 0;
}