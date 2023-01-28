#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int a = 11, b = 7, c;
    c = a & b;
    cout << c << endl;

    int d = 11, e = 7, f;
    f = d | e;
    cout << f << endl;

    int g = 11, h = 7, i;
    i = g ^ h;
    cout << i << endl;

    char j = 5, k;
    k = j << 1;
    cout << (int)k << endl;

    char l = 20, m;
    m = l >> 1;
    cout << (int)m << endl;

    char x = 5, y;
    y = ~x;
    cout << (int)y << endl;

    getch();
    return 0;
}