/*
Write a program to input 5 numbers and then print sum of the numbers and the third number using arrays.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x, n[5], sum = 0;
    cout << "Enter 5 Numbers -\n";
    for (x = 0; x < 5; x++) 
    {
        cin >> n[x];
        sum += n[x];
    }
    cout << "Sum = " << sum;
    cout << "\nThird Number = " << n[2];
    return 0;
}