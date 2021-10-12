/*
Write a program to input a multi digit number and then find out the sum of the digits.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num, temp = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) 
    {
        temp = num % 10;
        sum = sum + temp;
        num = num / 10;
    }
    cout << "Sum of the numbers: " << sum;
    return 0;
}