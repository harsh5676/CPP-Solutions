/*
Write a program to find out greater number from two number.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class great
{
public:
    int x, y, great;
    void in(int a, int b)
    {
        x = a;
        y = b;
        great = a > b ? a : b;
    }
    void out()
    {
        cout << "Greater of the two numbers - " << great;
    }
};

int main()
{
    great g;
    g.in(7, 9);
    g.out();
    getch();
    return 0;
}