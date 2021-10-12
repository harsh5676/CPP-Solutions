/*
Write a program to input student roll nunber, name, Father's Name, Mother's Name, address, and marks of 5 subjects. After that print the marksheet of 2 students.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class student
{
public:
    int roll;
    char name[10], f_name[10], m_name[10], add[20];
    float mat, phy, che, eng, hin, tot, per;

    void in()
    {
        cout << "Enter Roll No. - ";
        cin >> roll;
        cout << "Enter Student Name - ";
        cin >> name;
        cout << "Enter Father's Name - ";
        cin >> f_name;
        cout << "Enter Mother's Name - ";
        cin >> m_name;
        cout << "Enter Address - ";
        cin >> add;
        cout << "Enter Marks in -" << endl;
        cout << "Mathematics - ";
        cin >> mat;
        cout << "Physics - ";
        cin >> phy;
        cout << "Chemistry - ";
        cin >> che;
        cout << "English - ";
        cin >> eng;
        cout << "Hindi - ";
        cin >> hin;
        tot = mat + phy + che + eng + hin;
        per = tot / 5;
        system("cls");
    }
    void out()
    {
        cout << roll << "\t";
        cout << name << "\t";
        cout << f_name << "\t";
        cout << add << "\t";
        cout << tot << "\t";
        cout << per << "\t";
        if (per >= 60)
            cout << "First" << endl;
        else if (per >= 45)
            cout << "Second" << endl;
        else if (per >= 30)
            cout << "Third" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main()
{
    student s[2];
    int x;
    system("cls");
    cout << "Enter Student Details" << endl;
    for (x = 0; x < 2; x++)
    {
        s[x].in();
    }
    cout << "Student Report Card" << endl;
    cout << "______________________________________________________________________________________________" << endl;
    cout << "Roll\tName\tFather\tAddress\tTotal\tPercent\tDivision" << endl;
    cout << "______________________________________________________________________________________________" << endl;
    for (x = 0; x < 2; x++)
    {
        s[x].out();
    }

    getch();
    return 0;
}