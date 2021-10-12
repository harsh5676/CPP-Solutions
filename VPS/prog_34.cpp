/*
Write a program to illustrate the use of function overriding.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class base
{
public:
    void show()
    {
        cout << "This is a base class" << endl;
    }
};

class inheritance : public base
{
public:
    void show()
    {
        cout << "This is a inheritance class" << endl;
    }
};

int main()
{
    inheritance i;
    i.show();
    i.show();
    getch();
    return 0;
}