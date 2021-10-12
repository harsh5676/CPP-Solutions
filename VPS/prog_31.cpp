/*
Write a program to illustrate the use of array of object.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class student
{
public:
    char name[10];
    char add[10];
    char ph[10];

    void in()
    {
        cout << "\nEnter Name, Address & Phone Number - " << endl;
        cin >> name >> add >> ph;
    }

    void out()
    {
        cout << "\nName: " << name << endl;
        cout << "Address: " << add << endl;
        cout << "Phone Number: " << ph << endl;
    }
};

int main()
{
    student s[2];
    int x;
    cout << "Enter Student Details: " << endl;

    for (x = 0; x < 2; x++)
    {
        s[x].in();
    }

    for (x = 0; x < 2; x++)
    {
        s[x].out();
    }

    getch();
    return 0;
}