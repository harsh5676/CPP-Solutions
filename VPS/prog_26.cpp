/*
Write a program to perform result opertion using atleast 4 classes with inheritance.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class result
{
public:
    int in(int a, int b, int c, int d, int e)
    {
        return a + b + c + d + e;
    }
};

class add : public result
{
public:
    void sum()
    {
        cout << "Total Marks - " << in(50, 60, 70, 80, 90) << endl;
    }
};

class percent : public result
{
public:
    void per()
    {
        cout << "Percentage - " << in(50, 60, 70, 80, 90) / 5 << endl;
    }
};

class division : public result
{
public:
    void div()
    {
        if ((in(50, 60, 70, 80, 90) / 5) >= 60)
            cout << "Division - 1st" << endl;
        if ((in(50, 60, 70, 80, 90) / 5) >= 45)
            cout << "Division - 3rd" << endl;
        if ((in(50, 60, 70, 80, 90) / 5) >= 30)
            cout << "Division - 2nd" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main()
{
    add a;
    percent p;
    division d;
    a.in(50, 60, 70, 80, 90);
    a.sum();
    p.in(50, 60, 70, 80, 90);
    p.per();
    d.in(50, 60, 70, 80, 90);
    d.div();
    getch();
    return 0;
}