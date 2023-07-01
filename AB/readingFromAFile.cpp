#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("My2.txt");

    cout << "File is opened" << endl;
    string name;
    int roll;
    string branch;
    ifs >> name >> roll >> branch;
    ifs.close();

    cout << "Name - " << name << endl;
    cout << "Roll - " << roll << endl;
    cout << "Branch - " << branch << endl;
}