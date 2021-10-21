/*
Write a program to illustrate the use of friend class.
*/
#include <iostream>
#include <conio.h>

using namespace std;

class message1
{
public:
    int a, b;
    void show()
    {
        a = 5;
        b = 6;
    }
    friend class message2;
};

class message2
{
public:
    void show()
    {
        message1 m;
        cout << "Sum = " << m.a + m.b << endl;
    }
};

int main()
{
    message2 mq;
    mq.show();
    getch();
    return 0;
}