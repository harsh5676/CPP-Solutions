/*
Write a program to input a name and send it to a notepad after input.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    system("cls");
    char name[30];
    cout << "Enter your name - " << endl;
    cin >> name;
    ofstream out("name.txt");
    out << name;
    out.close();
    getch();
    return 0;
}