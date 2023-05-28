#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    char s1[20] = "Good";    // Destination String
    char s2[10] = "Morning"; // Source String

    // This function concatenates the destination with the source string, i.e. strcat(destination, source);
    strcat(s1, s2);

    // This function decides how many characters of the source string are to be concatenated to the destination string, i.e. strncat(destination, source, length);
    // strncat(s1, s2, 3);

    cout << s1 << endl;

    getch();
    return 0;
}