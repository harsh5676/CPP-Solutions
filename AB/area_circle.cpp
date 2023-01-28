#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    float radius, area;

    cout << "Enter Radius of the Circle: " << endl;
    cin >> radius;

    area = 3.1425 * radius * radius;

    cout << "The area of the Circle is " << area << endl;

    getch();
    return 0;
}