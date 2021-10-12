/*
Write a program to input 10 numbers and then count the even numbers and odd numbers using for loop.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, num, ecount = 0, ocount = 0;
    cout << "Enter 10 Numbers -\n";
    for (i = 1; i <= 10; i++)
    {
        cin >> num;
        if (num % 2 == 0)
            ecount++;
        else
            ocount++;
    }
    cout << "Total even numbers -\n" << ecount;
    cout << "\nTotal odd numbers -\n" << ocount;
    return 0;
}