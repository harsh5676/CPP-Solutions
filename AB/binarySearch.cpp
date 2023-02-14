#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int a[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int l = 0, h = 9, key = 0, mid = 0;
    cout << "Enter the key -" << endl;
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Found at " << mid << endl;
            return 0;
        }
        else if (key < a[mid])
        {
            h = mid - l;
        }
        else
        {
            l = mid + l;
        }
    }
    cout << "Not Found";
    getch();
    return 0;
}