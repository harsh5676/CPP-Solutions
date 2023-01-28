#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    float b_sal, net_sal, per_allow, per_deduct;

    cout << "Enter Basic Salary - " << endl;
    cin >> b_sal;
    cout << "Enter Percentage Allowance - " << endl;
    cin >> per_allow;
    cout << "Enter Percentage of Deductions - " << endl;
    cin >> per_deduct;

    net_sal = b_sal + b_sal * (per_allow / 100) - b_sal * (per_deduct / 100);

    cout << "Net Salary is - " << net_sal << endl;

    getch();
    return 0;
}