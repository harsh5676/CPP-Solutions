#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/* Everything is written inside main function so its monolithic */

int main()
{
    system("cls");

    int length = 0, breadth = 0;

    printf("Enter Length and Breadth - \n");
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    printf("Area = %d\nPerimeter = %d", area, peri);

    getch();
    return 0;
}