/*
Write a program to input age and then display the message allowed if the age is greater than or equal to 18. Otherwise display not allowed.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter your Age: ";
    cin >> x;
    if (x >= 18)
        cout << "You are allowed";
    else
        cout << "You are not allowed";
    return 0;
}
