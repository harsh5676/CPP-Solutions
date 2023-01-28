#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    cout << "Menu\n";
    cout << "1. add\n"
         << "2. sub\n"
         << "3. multi\n"
         << "4. div\n";

    int option;

    cout << "Enter Your Choice -" << endl;
    cin >> option;
    int a, b, c;

    cout << "Enter 2 Numbers - " << endl;
    cin >> a >> b;

    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    }
    cout << "Result is " << c << endl;

    getch();
    return 0;
}