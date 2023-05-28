#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    char s1[20] = "x=10;y=20;z=35;";

    char *token = strtok(s1, ";");

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, ";");
    }

    return 0;
}