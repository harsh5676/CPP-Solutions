/*
Write a program to perform virtual function in the outsider class without inheritance.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class pan
{
public:
    virtual void show()
    {
        cout << "Base Class" << endl;
    }
};

class lan
{
public:
    void show()
    {
        cout << "Derived Class" << endl;
    }
};

int main()
{
    system("cls");
    pan *p;
    lan l;
    p = &l;
    p->show();
    getch();
    return 0;
}