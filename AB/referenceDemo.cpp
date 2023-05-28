#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int x = 10;
    int &y = x;

    cout << x << endl;
    x++;
    y++;
    cout << x << endl;
    cout << &x << " " << &y;
    getch();
    return 0;
}