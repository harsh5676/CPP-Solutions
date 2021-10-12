/*
Write a program to input item name, MRP and quantity of any item. After thet print the price list including item name, MRP, rate, tax, discount, quantity and amount of 2 items.

Rate = MRP - 10% of MRP
Tax = 12% of Rate
Discount = 5% of Rate
Amount = (Rate + Tax - Discount) * quantity
*/

#include <iostream>
#include <conio.h>

using namespace std;

class item
{
public:
    char iname[30];
    float mrp, rate, tax, dis, amt;
    int quan;

    void in()
    {
        cout << "Enter Item Name, MRP & Quantity - " << endl;
        cin >> iname >> mrp >> quan;
        rate = mrp - (0.1 * mrp);
        tax = 0.12 * rate;
        dis = 0.05 * rate;
        amt = (rate + tax - dis) * quan;
    }

    void out()
    {
        cout << "\nItem Name: " << iname << endl;
        cout << "Quantity: " << quan << endl;
        cout << "MRP: " << mrp << endl;
        cout << "Rate: " << rate << endl;
        cout << "Tax: " << tax << endl;
        cout << "Discount: " << dis << endl;
        cout << "Amount: " << amt << endl;
    }
};

int main()
{
    item i[2];
    int x;
    cout << "Enter Item Details as mentioned" << endl;

    for (x = 0; x < 2; x++)
    {
        i[x].in();
    }

    for (x = 0; x < 2; x++)
    {
        i[x].out();
    }

    getch();
    return 0;
}