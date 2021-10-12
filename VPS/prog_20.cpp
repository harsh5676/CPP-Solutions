/*
Write a program to create a constructor to input two numbers and then a general function to display the sum of the numbers.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class add
{
public:
    int x, y;
    add()
    {
        cout << "Enter two numbers -\n";
        cin >> x >> y;
    }
    void sum()
    {
        cout << "Sum of two numbers - " << x + y;
    }
};

int main()
{
    add a;
    a.sum();
    getch();
    return 0;
}