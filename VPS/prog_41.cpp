/*
Write a program to illustrate the use of call by value function.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class mojo
{
public:
    void show(int x, int y)
    {
        cout << "Sum = " << x + y << endl;
    }
};

int main()
{
    mojo m;
    int a, b;
    cout << "Enter two Numbers - " << endl;
    cin >> a >> b;
    m.show(a, b);
    getch();
    return 0;
}