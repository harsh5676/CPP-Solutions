#include <iostream>
using namespace std;

/* Program for dynamic allocation */
int main()
{
    // PART - 1

    /*int *p = new int[5];

     p[0] = 12;
     p[1] = 13;
     cout << p[0] << endl;
     cout << p[1] << endl;

     delete[] p;
     p = nullptr;*/

    // PART - 2

    int size;

    cout << "Enter no of element" << endl;
    cin >> size;
    int a[size];
    cout << sizeof a << endl;

    // PART - 3

    /*    int *p = new int[20]; // This array is created in heap. Here we can take p[i] from 0 to 19.

        delete []p; // Before changing pointer p to point on the new array, we should delete the old/previous p.

        p = new int[40]; // Array of size 40 will be created in heap. Here we can take p[i] from 0 to 39.
    */
    return 0;
}