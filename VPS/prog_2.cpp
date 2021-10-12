/*
Write a program to input an alphabet and the check the alphabet if it is a vowel or a consonant.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "It is a vowel.";
    else
        cout << "It is a consonant";
    return 0;
}