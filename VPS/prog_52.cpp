/*
Write a program to create a base class with a virtual function and atleast three derived classes to perform three different operations.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class pan
{
public:
    virtual void display()
    {
        cout << "Base Class" << endl;
    }
};

class dan : public pan
{
public:
    void display()
    {
        cout << "Derived Class 1" << endl;
    }
};

class can : public pan
{
public:
    void display()
    {
        cout << "Derived Class 2" << endl;
    }
};

class lan : public pan
{
public:
    void display()
    {
        cout << "Derived Class 3" << endl;
    }
};

int main()
{
    system("cls");
    pan *p;
    dan d;
    can c;
    lan l;
    p = &d;
    p->display();
    p = &c;
    p->display();
    p = &l;
    p->display();
    getch();
    return 0;
}