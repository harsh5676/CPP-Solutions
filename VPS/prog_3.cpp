/*
Write a program to find out the sum of five numbers using for loop.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, x, sum = 0;
    cout << "Enter Five Numbers:\n";
    for (i = 1; i <= 5; i++)
    {
        cin >> x;
        sum += x;           // sum = sum + x;
    }
    cout << "Sum of five numbers:\n" << sum;
    return 0;
}