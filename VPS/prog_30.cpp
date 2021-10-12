/*
Write a program to illustrate the use of diamond inheritance.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class parent1
{
public:
    void show1()
    {
        cout << "Parent1 Class" << endl;
    }
};

class parent2 : public parent1
{
public:
    void show2()
    {
        cout << "Parent2 Class" << endl;
    }
};

class parent3 : virtual public parent1
{
public:
    void show3()
    {
        cout << "Parent3 Class" << endl;
    }
};

class parent4 : virtual public parent2
{
public:
    void show4()
    {
        cout << "Parent4 Class" << endl;
    }
};

int main()
{
    parent4 p;
    p.show1();
    p.show2();
    // p.show3();   // TODO Error
    p.show4();
    getch();
    return 0;
}