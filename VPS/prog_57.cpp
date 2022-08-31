/*
Write a program to illustrate the use of ofstream datatype in file handling.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    system("cls");
    ofstream out("raj.txt");
    out << "Hello file handling" << endl;
    out.close();
    getch();
    return 0;
}