#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "all.h"

using namespace std;

int main()
{
    system("cls");
    int x;
    allforone a;
    cout << "Enter your choice of program to run -" << endl;
    cout << "Press 1 for Age program to run." << endl;
    cout << "Press 2 for Vowel Consonant program to run." << endl;
    cout << "Press 3 for Sum of 5 numbers program to run." << endl;
    cout << "Press 4 for Sum of positive numbers program to run." << endl;
    cout << "Press 5 for Sum & Avg. of positive numbers program to run." << endl;
    cout << "Press 6 for Counting of Odd/Even program to run." << endl;
    cout << "Press 7 for Reverse the Number program to run." << endl;
    cout << "Press 8 for Sum of Digits of a number program to run." << endl;
    cout << "Press 9 for Sum of Unlimited numbers program to run." << endl;
    cout << "Press 10 for Sum of 5 +ve numbers & print 3rd num. program to run." << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        a.agein();
        break;

    case 2:
        a.vowcon();
        break;

    case 3:
        a.sumfive();
        break;

    case 4:
        a.sumpos();
        break;

    case 5:
        a.sumAvg();
        break;

    case 6:
        a.oddEven();
        break;

    case 7:
        a.reverseNum();
        break;

    case 8:
        a.sumOfDigits();
        break;

    case 9:
        a.sumOfUnlNum();
        break;

    case 10:
        a.sumThird();
        break;

    default:
        break;
    }
    getch();
    return 0;
}