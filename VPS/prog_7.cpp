/*
Write a program to input a multi digit number and then reverse the number using while loop.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, temp = 0;
    cout << "Enter a number - ";
    cin >> n;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        cout << temp;
    }
    return 0;
}
