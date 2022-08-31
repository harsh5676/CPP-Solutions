#include <iostream>
#include <conio.h>

using namespace std;

class allforone
{
public:
    void agein()
    {
        int x;
        cout << "Enter your Age: ";
        cin >> x;
        if (x >= 18)
            cout << "You are allowed";
        else
            cout << "You are not allowed";
    }

    void vowcon()
    {
        char ch;
        cout << "Enter an alphabet: ";
        cin >> ch;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "It is a vowel.";
        else
            cout << "It is a consonant";
    }

    void sumfive()
    {
        int i, x, sum = 0;
        cout << "Enter Five Numbers:\n";
        for (i = 1; i <= 5; i++)
        {
            cin >> x;
            sum += x;
        }
        cout << "Sum of five numbers:\n"
             << sum << endl;
    }

    void sumpos()
    {
        int i, x, sum = 0;
        cout << "Enter Five Numbers -\n";
        for (i = 1; i <= 5; i++)
        {
            cin >> x;
            if (x > 0)
                sum += x;
        }
        cout << "Sum of all the positive numbers -\n"
             << sum << endl;
    }

    void sumAvg()
    {
        int i, x, avg, n = 0, sum = 0;
        cout << "Enter Five Numbers -\n";
        for (i = 1; i <= 5; i++)
        {
            cin >> x;
            if (x > 0)
            {
                sum += x; // sum = sum + x;
                n++;
            }
        }
        avg = sum / n;
        cout << "Sum of all the positive numbers -\n"
             << sum;
        cout << "\nAverage of all the positive numbers -\n"
             << avg;
    }

    void oddEven()
    {
        int i, num, ecount = 0, ocount = 0;
        cout << "Enter 10 Numbers -\n";
        for (i = 1; i <= 10; i++)
        {
            cin >> num;
            if (num % 2 == 0)
                ecount++;
            else
                ocount++;
        }
        cout << "Total even numbers -\n"
             << ecount;
        cout << "\nTotal odd numbers -\n"
             << ocount;
    }

    void reverseNum()
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
    }

    void sumOfDigits()
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
    }

    void sumOfUnlNum()
    {
        int num = 1, sum = 0;
        cout << "Enter Numbers -\n";
        while (num > 0)
        {
            cin >> num;
            sum += num; // sum = sum + num;
        }
        cout << "Sum = " << sum;
    }

    void sumThird()
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
    }
};