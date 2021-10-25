/*
Register Storage Class
*/

#include <iostream>
#include <conio.h>

using namespace std;

void show()
{
    register int counter = 5;
    cout << "Counter: " << counter << endl;
}

int main()
{
    show();
    getch();
    return 0;
}