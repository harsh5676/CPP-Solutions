/*
Write a program to illustrate the use of macro -
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define PI 3.14159

using namespace std;

int main()
{
    system("cls");
    int r;
    cout << "Enter radius of the Circle: " << endl;
    cin >> r;
    cout << "Area of the Circle: " << PI * (r * r);
    getch();
    return 0;
}