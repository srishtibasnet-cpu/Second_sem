#include <iostream>
#include<string>
using namespace std;
class student{
    private: 
    string name; 
    int rollno;
    int age; 
    float percentage;
    public :
        void SetData(string name, int age, float percentage)
            {
                this->name-name; //s1.name
                this->rollno-rollno;
                this->age-age; //s1.age
                this->percentage-percentage;

            }
        void showData() //you have to define prototype inside the class 
        {
            
        void dummy()
        {
            cout<<this<<endl;
        }
    };
int main() {
    student s1,s2;
s1.setData();
s2.showData();

    return 0;
}