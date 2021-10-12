/*
Write a program to illustrate the use of multiclasses program.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class name
{
public:
    void show()
    {
        cout << "Harshit" << endl;
    }
};

class add
{
public:
    void show()
    {
        cout << "Begusarai" << endl;
    }
};

class phone
{
public:
    void show()
    {
        cout << "123456789" << endl;
    }
};

int main()
{
    name n;
    n.show();
    add a;
    a.show();
    phone p;
    p.show();
    getch();
    return 0;
}