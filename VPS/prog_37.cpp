/*
Write a program to illustrate the use of friend function.
*/

#include <iostream>
#include <conio.h>

using namespace std;

class mukund
{
private:
    int x, y, sum = 0;

public:
    void show()
    {
        cout << "Sum = " << sum;
    }
    friend void harshit(mukund mu);
    friend void harshit();
};

void harshit(mukund mu)
{
    cout << "Enter two Numbers - " << endl;
    cin >> mu.x >> mu.y;
    mu.sum = mu.x + mu.y;
}

int main()
{
    mukund m;
    harshit(m);
    m.show();
    getch();
    return 0;
}