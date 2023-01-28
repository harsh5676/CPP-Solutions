#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int b{0x10}; // int b = 0x10 (In hexadecimal)

    cout << b << endl;

    int x = 5, y;
    y = x++; // Assigns y with 5 then x becomes 6
    cout << "Value of y when post-increment operator is used on x : " << y << endl;
    y = ++x; // x becomes 7 then assigns the value 7 in y
    cout << "Value of y when pre-increment operator is used on x : " << y << endl;

    getch();
    return 0;
}