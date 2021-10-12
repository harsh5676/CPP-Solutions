/*
Sum of 100 Numbers entered by the user.
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum = 0, i;
    cout << "Enter 100 Numbers -\n";
    for ( i = 1; i <= 100; i++)
    {
        cin >> n;
        sum += n;
    }
    cout << "Sum of 100 Numbers: " << sum;
    
    return 0;
}