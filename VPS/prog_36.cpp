/*
Write a program to input personal details and professional details. After that print all details. Perform these three tasks using three classes with function override. 
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class pr
{
public:
    char name[15], f_name[15], m_name[15], add[30], phn[15], email[15], dob[15], gen[10], ms[10];
    char qual[10], cert[15], work_exp[10], over_exp[10];
    void d()
    {
        system("cls");
        cout << "Printing Personal Details -" << endl;
        cout << "Name: " << name << endl;
        cout << "Father's Name: " << f_name << endl;
        cout << "Mother's Name: " << m_name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Gender: " << gen << endl;
        cout << "Address: " << add << endl;
        cout << "Phone Number: " << phn << endl;
        cout << "Email: " << email << endl;
        cout << "Martial Status: " << ms << endl;
        cout << "Printing Professional Details -" << endl;
        cout << "Qualification: " << qual << endl;
        cout << "Certification: " << cert << endl;
        cout << "Work Experience(in yrs): " << work_exp << endl;
        cout << "Overseas Experience(in yrs): " << over_exp << endl;
    }
};

class prof : public pr
{
public:
    void d()
    {
        cout << "Enter Professional Details -" << endl;
        cout << "Qualification: ";
        cin >> qual;
        cout << "Certification: ";
        cin >> cert;
        cout << "Work Experience(in yrs): ";
        cin >> work_exp;
        cout << "Overseas Experience(in yrs) if any: ";
        cin >> over_exp;
        system("cls");
    }
};

class per : public prof
{
public:
    void d()
    {
        cout << "Enter Personal Details -" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Father's Name: ";
        cin >> f_name;
        cout << "Mother's Name: ";
        cin >> m_name;
        cout << "Date of Birth: ";
        cin >> dob;
        cout << "Gender: ";
        cin >> gen;
        cout << "Address: ";
        cin >> add;
        cout << "Phone Number: ";
        cin >> phn;
        cout << "Email: ";
        cin >> email;
        cout << "Martial Status: ";
        cin >> ms;
        system("cls");
    }
};

int main()
{
    pr t;
    prof f;
    per p;
    p.d();
    f.d();
    t.d();
    getch();
    return 0;
}