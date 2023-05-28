#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    char s1[20] = "Hello";
    char s2[20] = "Hello";
    char s3[20] = "HellO";
    char s4[20] = "Hello";
    char s5[20] = "minor";
    char s6[20] = "elder ";

    cout << strcmp(s1, s2) << endl;
    cout << strcmp(s3, s4) << endl;
    cout << strcmp(s5, s6) << endl;

    return 0;
}