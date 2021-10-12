/*
Write a program to find out sum of unlimited numbers using while loops.
*/

// Method - 1

// #include <iostream>
// #include <conio.h>
// using namespace std;

// int main()
// {
//     int num, sum = 0;
//     cout << "Enter Numbers -\n";
//     do
//     {
//         cin >> num;
//         sum += num;     // sum = sum + num;
//     } while (num > 0);
//     cout << "Sum = " << sum;
//     return 0;
// }

// Method - 2

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   int num = 1, sum = 0;
    cout << "Enter Numbers -\n";
    while (num > 0)
    {
        cin >> num;
        sum += num;     // sum = sum + num;
    }
    cout << "Sum = " << sum;
    return 0;
}