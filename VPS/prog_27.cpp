/*
Write a program to illustrate the use of multilevel inheritance.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class details
{
public:
    void show1()
    {
        cout << "Name" << endl;
    }
};
class age : public details
{
public:
    void show2()
    {
        cout << "Age" << endl;
    }
};
class phn : public age
{
public:
    void show3()
    {
        cout << "Phone Number" << endl;
    }
};
class email : public phn
{
public:
    void show4()
    {
        cout << "Email" << endl;
    }
};

int main()
{
    email e;
    e.show1();
    e.show2();
    e.show3();
    e.show4();
    getch();
    return 0;
}