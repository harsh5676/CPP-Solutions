#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    char s1[20] = "Good"; // Source
    char s2[10] = "";     // Destination

    // This function will copy the contents of one string to another string. Syntax - strcpy(destination, source);
    strcpy(s2, s1);

    // This funtion will also copy the contents of one string to another string but is used when we want to mention how many letters we want to copy from the source string, i.e. strncpy(destination, source, length);
    // strncpy(s2, s1, 2);

    cout << s2 << endl;

    getch();
    return 0;
}