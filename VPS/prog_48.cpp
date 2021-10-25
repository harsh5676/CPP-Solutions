/*
Static Storage Class
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void show()
{
    static int x = 0;
    int y = 0;
    x++;
    y++;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

int main()
{
    system("cls");
    show();
    show();
    show();
    getch();
    return 0;
}