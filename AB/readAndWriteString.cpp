#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    char s[100];
    char s2[100];

    cout << "Enter your Name -" << endl;
    cin.get(s, 100);

    // cin>>s; // Only for single word. Cannot contain spaces.

    // cin.get(s, 100); // Can contain 99 characters plus one null character ('\0') including spaces and continue to do so unless Enter Key is pressed.

    // cin.getline(s, 100); // Same as get function.

    cout << "Welcome " << s << endl;

    cin.ignore();

    cout << "Enter your Name Again -" << endl;
    cin.get(s2, 100);
    cout << "Welcome " << s2 << endl;

    getch();
    return 0;
}