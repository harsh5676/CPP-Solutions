/*
Write a program to illustrate the use of call by reference.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class abcd
{
public:
    void show(int &x, int &y)
    {
        cout << "Sum = " << x + y << endl;
    }
};

int main()
{
    abcd p;
    int a, b;
    cout << "Enter two numbers - " << endl;
    cin >> a >> b;
    p.show(a, b);
    getch();
    return 0;
}