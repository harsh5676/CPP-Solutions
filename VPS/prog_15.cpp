/*
Write a program to input Roll No., Name, Father's Name, Address, Marks of 5 subjects(Maths ,Physics, Chemistry, English and Hindi), Total, Percentage, and Division.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct student
{
    char name[50], f_name[50], add[50], div[10];
    int roll;
    float mathematics, phy, che, eng, hin, tot;
    float per;
} stu[100];

int main()
{
    int i;
    cout << "Enter as listed (Roll No., Name, Father's Name, Address, Marks in - Maths, Physics, Chemistry, English, Hindi)" << endl;
    for (i = 0; i < 2; i++)
    {
        cin >> stu[i].roll;
        cin >> stu[i].name;
        cin >> stu[i].f_name;
        cin >> stu[i].add;
        cin >> stu[i].mathematics;
        cin >> stu[i].phy;
        cin >> stu[i].che;
        cin >> stu[i].eng;
        cin >> stu[i].hin;

        stu[i].tot = stu[i].mathematics + stu[i].phy + stu[i].che + stu[i].eng + stu[i].hin;
        stu[i].per = stu[i].tot / 5;
    }

    for (i = 0; i < 2; i++)
    {
        cout << "\nRoll No. - " << stu[i].roll << endl;
        cout << "Name - " << stu[i].name << endl;
        cout << "Father's Name - " << stu[i].f_name << endl;
        cout << "Address - " << stu[i].add << endl;
        cout << "Marks in Math - " << stu[i].mathematics << endl;
        cout << "Marks in Physics - " << stu[i].phy << endl;
        cout << "Marks in Chemistry - " << stu[i].che << endl;
        cout << "Marks in English - " << stu[i].eng << endl;
        cout << "Marks in Hindi - " << stu[i].hin << endl;
        cout << "Total - " << stu[i].tot << endl;
        cout << "Percentage - " << stu[i].per << endl;

        cout << "Division - ";
        if (stu[i].per >= 60)
            cout << "1st\n";
        else if (stu[i].per > 30)
            cout << "2nd\n";
        else
            cout << "3rd\n";
    }

    getch();
    return 0;
}