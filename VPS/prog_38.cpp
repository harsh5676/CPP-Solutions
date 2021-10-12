/*
Write a program to create atleast two friend functions to show average of three numbers and simple interest. To input the data create an internal function. 
*/

#include <iostream>
#include <conio.h>

using namespace std;

class santosh
{
private:
    int x, y, z, sum, si;

public:
    void show()
    {
        cout << "Enter three numbers or Principal, Rate and Time" << endl;
        cin >> x >> y >> z;
        sum = x + y + z;
        si = (x * y * z) / 100;
    }
    friend void mukund(santosh p);
    friend void mukund();
    friend void harshit(santosh p);
    friend void harshit();
};

void mukund(santosh p)
{
    cout << "Average of Three Numbers - " << p.sum / 3 << endl;
}

void harshit(santosh p)
{
    cout << "Simple Interest - " << p.si << endl;
}

int main()
{
    santosh s;
    s.show();
    mukund(s);
    harshit(s);
    getch();
    return 0;
}