/*
External Storage Class
*/

#include <iostream>
#include <conio.h>

using namespace std;

int x = 100;

void show()
{
    extern x;
    cout << "Square is = " << x * x << endl;
}

int main()
{
    x = 5;
    show();
    getch();
    return 0;
}
