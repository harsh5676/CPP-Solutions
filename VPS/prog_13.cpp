/*
Write a program to input name, address, and phone number and then print all.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char name[20], address[20], num[10];
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Address: ";
    cin >> address;
    cout << "Enter Phone Number: ";
    cin >> num;
    cout << "Printing Details:\n";
    cout << "Name: " << name << "\n";
    cout << "Address: " << address << "\n";
    cout << "Phone Number: " << num << "\n";
    return 0;
}