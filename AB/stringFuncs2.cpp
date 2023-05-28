#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    system("cls");

    string s = "Welcome";

    char str[10];

    s.copy(str, 3);
    str[3] = '\0'; // Inserting null character as it has not been inserted.

    cout << str << endl;

    return 0;
}