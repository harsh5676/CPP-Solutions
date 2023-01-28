#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    float billAmount, finalAmount;
    float discount = 0.0;

    cout << "Enter Total Amount -" << endl;
    cin >> billAmount;

    if (billAmount < 100)
    {
        cout << "No discount." << endl;
    }
    else if (billAmount >= 100 && billAmount < 500)
    {
        discount = billAmount * 0.10;
    }
    else
    {
        discount = billAmount * 0.20;
    }

    finalAmount = billAmount - discount;

    cout << "The bill Amount is $" << billAmount << endl;
    cout << "The discount is $" << discount << endl;
    cout << "The final amount to be paid is $" << finalAmount << endl;

    getch();
    return 0;
}