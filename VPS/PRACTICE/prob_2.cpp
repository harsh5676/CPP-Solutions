/*
Sum of first 100 Numbers.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n = 100, sum = 0;
    sum = n * (n + 1) / 2;
    cout << "Sum of first 100 Natural numbers - " << sum;
    return 0;
}