/*
Continue from head.h
Now create a main program and link the header file head.h
*/

#include <iostream>
#include <conio.h>
#include "head.h"

using namespace std;

int main()
{
    system("cls");
    header h;
    h.show();
    getch();
    return 0;
}