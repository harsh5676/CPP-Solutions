/*
Write a program to illustrate the use of simple inheritance -
*/

#include <iostream>
#include <conio.h>

using namespace std;

class gParent
{
public:
    void show1()
    {
        cout << "Grandparent Class" << endl;
    }
};

class parent : public gParent
{
public:
    void show2()
    {
        cout << "Parent Class" << endl;
    }
};

int main()
{
    parent p;
    p.show1();
    p.show2();
    getch();
    return 0;
}