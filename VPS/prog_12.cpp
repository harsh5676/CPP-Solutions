/*
Write a program to input 5 numbers in an array variable and then print all of them.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x, n[5];
    cout << "Enter 5 Numbers -\n";
    for ( x = 0; x < 5; x++)
    {
        cin >> n[x];
    }
    cout << "Printing Elements -\n";
    for ( x = 0; x < 5; x++)
    {
        cout << n[x] << "\n";
    }
    
    return 0;
}