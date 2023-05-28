#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    char s1[20] = "Programming";
    char s2[10] = "gram";
    // char s2[10] = "k";

    // if sub is found then only it will display the word otherwise Not Found will be displayed.
    if (strstr(s1, s2) != NULL)
    {
        cout << strstr(s1, s2) << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}