/*
Write a program to input 5 numbers and then print sum of the numbers and the third number.
*/

// Using For Loop

// #include <iostream>
// #include <conio.h>

// using namespace std;

// int main()
// {
//     int num, i, t, sum = 0;
//     cout << "Enter 5 Numbers -\n";
//     for(i = 1; i <= 5; i++)
//     {
//         cin >> num;
//         if(num > 0)
//             sum = sum + num;
//         if(i == 3)
//             t = num;
//     }
//     cout << "Sum = " << sum;
//     cout << "\nThird Number = " << t;
//     return 0;
// }

// Using While Loop

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, i = 1, t, sum = 0;
    cout << "Enter 5 Numbers -\n";
    while (i <= 5)
    {
        cin >> num;
        sum += num;
        if (i == 3)
            t = num;
        i++;
    }
    cout << "Sum = " << sum;
    cout << "\nThird Number = " << t;
    return 0;
}

