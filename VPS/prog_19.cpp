/*
Write a program to illustrate the use of the constructor.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class mes
{
public:
    mes()
    {
        cout << "Constructor";
    }
};

int main()
{
    mes m;
    getch();
    return 0;
}