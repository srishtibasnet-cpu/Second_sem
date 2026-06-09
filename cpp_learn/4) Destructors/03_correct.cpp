#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int rollno;
    int age;
    float percentage;

public:
    student() {}   // default constructor

    void setData(string name="null",
                 int rollno=0,
                 int age=0,
                 float percentage=0.0)
    {
        this->name = name;
        this->rollno = rollno;
        this->age = age;
        this->percentage = percentage;
    }

    void showData();

    ~student()
    {
        cout << "destructor called" << endl;
    }
};

void student::showData()
{
    cout << "====================\n";
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "rollno: " << rollno << endl;
    cout << "percentage: " << percentage << endl;
    cout << "====================\n";
}

int main()
{
    student s1, s2;

    s1.setData("Shreli", 80, 18, 85);
    s1.showData();

    return 0;
}