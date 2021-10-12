/*
Write a program to find out sum of two numbers using class programming.
*/

// Type - 1

// #include <iostream>
// #include <conio.h>

// using namespace std;

// class addition
// {
// public:
//     int x, y, sum = 0;
//     void add()
//     {
//         cout << "Enter Two Numbers -\n";
//         cin >> x >> y;
//         sum = x + y;
//         cout << "Sum - " << sum;
//     }
// };

// int main()
// {
//     addition a;
//     a.add();
//     getch();
//     return 0;
// }

// Type - 2

#include <iostream>
#include <conio.h>

using namespace std;

class add
{
public:
    int x, y;
    void in(int a, int b)
    {
        x = a;
        y = b;
    }
    void out()
    {
        cout << "Sum = " << x + y;
    }
};

int main()
{
    add a;
    a.in(5, 6);
    a.out();
    getch();
    return 0;
}