/*
Write a program to perform the average of three numbers using atleast three classes with same names and function overriding.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class avg
{
public:
    int x, y, z, sum;
    void a()
    {
        cout << "Average: " << sum / 3 << endl;
    }
};

class add : public avg
{
public:
    void a()
    {
        sum = x + y + z;
        cout << "Sum: " << sum << endl;
    }
};

class in : public add
{
public:
    void a()
    {
        cout << "Enter 3 numbers - " << endl;
        cin >> x >> y >> z;
    }
};

int main()
{
    avg g;
    add d;
    in i;
    i.a();
    d.a();
    g.a();
    getch();
    return 0;
}