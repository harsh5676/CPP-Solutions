#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class india
{
private:
    int a, b;

public:
    void test()
    {
        a = 100;
        b = 200;
    }
    friend int compute(india i);
    friend int compute();
};

int compute(india i)
{
    return (i.a + i.b);
}

int main()
{
    system("cls");
    india ind;
    ind.test();
    cout << "Result = " << compute(ind) << endl;
    getch();
    return 0;
}