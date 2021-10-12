/*
Write a program to perform the average of three numbers using 3 separate classes.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class calc1
{
public:
    int show(int x, int y, int z)
    {
        return x + y + z;
    }
};

class calc2
{
public:
    void show(int x)
    {
        cout << "Sum = " << x << endl;
    }
};

class calc3
{
public:
    void show(int x)
    {
        cout << "Average = " << x / 3 << endl;
    }
};

int main()
{
    int sum;
    calc1 c1;
    sum = c1.show(5, 10, 15);
    calc2 c2;
    c2.show(sum);
    calc3 c3;
    c3.show(sum);
    getch();
    return 0;
}