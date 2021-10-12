/*
Write a program to find out the average of only positive numbers from the five numbers given by the user using for loop.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, x, avg, n = 0, sum = 0;
    cout << "Enter Five Numbers -\n";
    for (i = 1; i <= 5; i++) 
    {
        cin >> x;
        if (x > 0)
        {
            sum += x;       // sum = sum + x;
            n++;
        }
    }
    avg = sum / n;
    cout << "Sum of all the positive numbers -\n" << sum;
    cout << "\nAverage of all the positive numbers -\n" << avg;
    return 0;
}