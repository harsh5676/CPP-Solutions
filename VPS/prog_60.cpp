/*
Write a program to input name, course & fee and then send it into the notepad file.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    system("cls");
    char name[30], course[30];
    float fee;
    cout << "Enter your name - " << endl;
    cin >> name;
    cout << "Enter your Course name - " << endl;
    cin >> course;
    cout << "Enter your fee - " << endl;
    cin >> fee;
    ofstream out("note.txt");
    out << "Your name is " << name << endl;
    out << "Your Course is " << course << endl;
    out << "Your fee is Rs." << fee << endl;
    out.close();
    getch();
    return 0;
}