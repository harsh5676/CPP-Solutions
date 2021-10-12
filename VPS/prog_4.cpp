/*
Write a program to find out sum of only the positive numbers from the 5 numbers given by the user using for loop.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, x, sum = 0;
    cout << "Enter Five Numbers -\n";
    for (i = 1; i <= 5; i++) 
    {
        cin >> x;
        if (x > 0) 
            sum += x;       // sum = sum + x;
    }
    cout << "Sum of all the positive numbers -\n" << sum;
    return 0;
}