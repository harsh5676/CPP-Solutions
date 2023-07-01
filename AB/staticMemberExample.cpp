#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    static int addNo;

    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }

    void display()
    {
        cout << "Name " << name << endl
             << "Roll " << roll << endl;
    }
};

int Student::addNo = 0;
int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Shubham");
    Student s5("Abhishek");
    Student s6("Ram");

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();

    cout << "Number Admission " << Student::addNo << endl;
}