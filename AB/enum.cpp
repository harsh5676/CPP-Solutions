#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

enum day
{
    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};
enum dept
{
    cs = 1,
    it,
    ece,
    civil
};

int main()
{
    system("cls");
    day d;
    d = tue;

    dept dep;
    dep = cs;

    cout << dep << endl
         << endl;

    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;
    getch();
    return 0;
}