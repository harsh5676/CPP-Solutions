/*
Automatic Storage Class
*/

#include <iostream>
#include <conio.h>

using namespace std;

void show()
{
    auto x = 5;
    cout << "x = " << x << endl;
}

int main()
{
    show();
    getch();
    return 0;
}