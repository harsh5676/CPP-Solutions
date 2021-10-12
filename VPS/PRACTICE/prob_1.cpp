/* Program to add two numbers using function with arguments */

#include <iostream>
#include <conio.h>
using namespace std;

int add(int a, int b);

int main()
{
    int x, y, z;
    cout << "Enter two numbers to find their sum -\n";
    cin >> x >> y;
    z = add(x, y);
    cout << "Sum of the two numbers entered is " << z;
    return 0;
}

int add(int a, int b) 
{
    int c;
    c = a + b;
    return c;
}