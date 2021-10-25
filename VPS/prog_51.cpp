/*
Virtual Function
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class hello
{
public:
    virtual void display()
    {
        cout << "It is a base class." << endl;
    }
};

class world : public hello
{
public:
    void display()
    {
        cout << "It is a derived class." << endl;
    }
};

int main()
{
    system("cls");
    hello *h;
    world w;
    h = &w;
    h->display();
    getch();
    return 0;
}