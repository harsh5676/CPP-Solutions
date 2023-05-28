#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    char s1[20] = "Programming";

    cout << strchr(s1, 'r') << endl;
    cout << strrchr(s1, 'r') << endl; // This will check the occurance from right.

    getch();
    return 0;
}