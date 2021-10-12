/*
Write a program to illustrate the use of class programming.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class program 
{
    public:
        void show()
        {
            cout << "It is class programming";
        }
};

int main()
{
    program p;
    p.show();
    getch();
    return 0;
}