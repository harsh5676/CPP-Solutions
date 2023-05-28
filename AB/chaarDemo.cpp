#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    // '0', '\0' are null characters.

    // char S[] = {'H', 'e', 'l', 'l', 'o', '\0', 'p', 'p', 'p'};
    // char S[] = {65, 66, 67, 68, '\0'};
    // char S[] = {65, 66, 67, 68, 0, 69, 70};
    // char *S = "Hello";
    string S = "Hello";

    cout << S << endl;

    getch();
    return 0;
}