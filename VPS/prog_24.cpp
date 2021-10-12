/*
Write a program to illustrate the use of function overloading.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class calc
{
public:
    void show(int x, int y, int z)
    {
        cout << "Average: " << (x + y + z) / 3 << endl;
    }
    void show(int x, int y)
    {
        cout << "Sum: " << x + y << endl;
    }
    void show()
    {
        cout << "Thank you for using this program." << endl;
    }
};

int main()
{
    calc c;
    c.show(5, 10, 15);
    c.show(44, 56);
    c.show();
    getch();
    return 0;
}