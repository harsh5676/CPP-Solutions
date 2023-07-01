#include <iostream>
using namespace std;

/*program for function overloading sum of two integers

*/
int max(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}
int main()
{
    cout << max() << endl;
    cout << max(10) << endl;
    cout << max(10, 13) << endl;
    cout << max(10, 13, 15) << endl;
    return 0;
}