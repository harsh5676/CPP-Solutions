/*
Write a program to illustrate the use of multiple inheritance.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class parent1
{
public:
    void show1()
    {
        cout << "Parent1" << endl;
    }
};

class parent2
{
public:
    void show2()
    {
        cout << "Parent2" << endl;
    }
};

class child : public parent1, public parent2
{
public:
    void show3()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    child c;
    c.show1();
    c.show2();
    c.show3();
    getch();
    return 0;
}