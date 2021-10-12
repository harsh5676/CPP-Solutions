/*
Write a program to perform marks operation using multilevel inheritsnce with at laest four classes..
*/

#include <iostream>
#include <conio.h>

using namespace std;

class data
{
public:
    int a, b, c, d, e, tot;
    float per;
    void input(int p, int q, int r, int s, int t)
    {
        a = p;
        b = q;
        c = r;
        d = s;
        e = t;
        tot = a + b + c + d + e;
        per = tot / 5;
    }
};

class total : public data
{
public:
    void show1()
    {
        cout << "Total Marks: " << tot << endl;
    }
};

class percent : public total
{
public:
    void show2()
    {
        cout << "Percent: " << per << endl;
    }
};

class division : public percent
{
public:
    void show3()
    {
        if (per >= 60)
            cout << "Division: 1st" << endl;
        else if (per >= 45)
            cout << "Division: 2nd" << endl;
        else if (per >= 30)
            cout << "Division: 3rd" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main()
{
    division d;
    d.input(50, 60, 70, 80, 90);
    d.show1();
    d.show2();
    d.show3();
    getch();
    return 0;
}