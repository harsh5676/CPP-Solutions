/*
Write a program to print your name five times using recursion.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int count = 0;

void name()
{
    count++;
    if (count <= 5)
    {
        cout << "Raj" << endl;
        name();
    }
}

int main()
{
    name();
    getch();
    return 0;
}