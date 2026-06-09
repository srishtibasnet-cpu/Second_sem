#include <iostream>
#include <string>
using namespace std;

class student {
    student(string name, int age, float percentage)
        void setData(string name="null", int rollno = 0, int age = 0, float percentage = 0.00) 
        {
            (*this-).name=name;     //or (*this).name=name; also same      
            this->rollno=rollno;       
            this->age=age;             
            this->percentage=percentage; 
        }

        void showData();  

      ~student()
      {
        cout<<"destructor called"<<endl;
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
    s1.setData("Shreli",80,18,85);
    s1.showData();

    return 0;
}