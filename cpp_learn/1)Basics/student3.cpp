#include <iostream>
#include <string>
using namespace std;

class student {
    private:
        string name;
        int rollno;
        int age;
        float percentage;

    public:
        void setData(string name="null", int rollno = 0, int age = 0, float percentage = 0.00) 
        {
            this->name=name;     //or (*this).name=name; also same      
            this->rollno=rollno;       
            this->age=age;             
            this->percentage=percentage; 
        }

        void showData();  

        void dummy() 
        {
            cout << this << endl; //address
        }
};
void student::showData() //::->scope resolution operator; <return type> student class 
{
             cout<<"====================\n";
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"rollno: "<<rollno<<endl;
            cout<<"percentage: "<<percentage<<endl;
            cout<<"====================\n";
}
int main() {
    student s1, s2;
    s1.setData("Srishti", 101, 20, 85.5);
    s1.showData();
    s1.dummy(); 

    return 0;
}