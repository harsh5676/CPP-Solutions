/*
Write a program to create one constructor to input three numbers and two general function to performsum and average of three numbers.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class calc
{
public:
    int x, y, z, sum = 0;
    calc(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void tot()
    {
        sum = x + y + z;
    }
    void avg()
    {
        cout << "Average - " << sum / 3;
    }
};

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers -\n";
    cin >> n1 >> n2 >> n3;
    calc a(n1, n2, n3);
    a.tot();
    a.avg();
    getch();
    return 0;
}