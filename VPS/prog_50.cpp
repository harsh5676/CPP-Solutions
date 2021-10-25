/*
Mutable Storage Class
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class customer
{
    public:
    char name[25];
    mutable char order[50];
    int table;
    mutable int bill;

    customer(char *s, char *m, int a, int p)
    {
        strcpy(name, s);
        strcpy(order, m);
        table = a;
        bill = p;
    }

    void placeOrder(char *p)
    {
        strcpy(order, p);
    }

    void billChanged(int s)
    {
        bill = s;
    }

    void dispay()
    {
        cout << "The name of customer is " << name << endl;
        cout << "Order placed by customer is " << order << endl;
        cout << "The table no. of customer is " << table << endl;
        cout << "Total Bill Amount is " << bill << endl;
    }
};

int main()
{
    customer cu;
    customer("Santosh Kumar", "Veg Burger", 3, 100);
    cu.dispay();
    cu.placeOrder("Veg Pizza");
    cu.billChanged(150);
    getch();
    return 0;
}