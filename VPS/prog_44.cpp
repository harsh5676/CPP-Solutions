#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int fact(int);
    int f, value;
    cout << "Enter a number -" << endl;
    cin >> value;
    f = fact(value);
    cout << "Factorial of the number = " << f << endl;
    getch();
    return 0;
}

int fact(int x)
{
    if (x < 0)
    {
        return -1;
    }
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}