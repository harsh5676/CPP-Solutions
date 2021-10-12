/*
Write a program to input name, address, and phone number of 5 employee and then print all.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee
{
    char name[20], add[20], ph[10];
}Emp[100];


int main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
    cout << "\nEnter Name: ";
    cin >> Emp[i].name;
    cout << "Enter Address: ";
    cin >> Emp[i].add;
    cout << "Enter Phone Number: ";
    cin >> Emp[i].ph;
    }
    for ( i = 0; i < 2; i++)
    {
    cout << "\nName: " << Emp[i].name << "\n";
    cout << "Address: " << Emp[i].add << "\n";
    cout << "Phone Number: " << Emp[i].ph << "\n";
    }
    
    return 0;
}