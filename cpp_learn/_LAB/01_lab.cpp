#include <iostream>
#include<string>
using namespace std;

//creating template or blueprint
    struct student{  
        private :
        string name; 
        int rollno;
        int age;
        float percentage;
    };
int main() {
    student s1; //creating an object of the structure student 
    //assigning values to the data members of the structure
    s1.name = "Srishti"; 
    s1.rollno = 84;
    s1.age = 17;
    s1.percentage = 85;

        cout<<"Name: "<<s1.name<<endl;
        cout<<"rollno "<<s1.rollno<<endl;
        cout<<"age: "<<s1.age<<endl;
        cout<<"percentage: "<<s1.percentage<<endl;
    return 0;
}

//endl = like \n of Cs