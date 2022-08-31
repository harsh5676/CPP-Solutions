/*
Write a program to send a number in notepad file after input.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    system("cls");
    int x;
    cout << "Enter a number - " << endl;
    cin >> x;
    ofstream out("num.txt");
    out << x;
    out.close();
    getch();
    return 0;
}