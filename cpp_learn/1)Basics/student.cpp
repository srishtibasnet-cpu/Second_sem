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
        void SetData()
            {
                cout <<"enter you name: "<<endl;
                cin>>name;
                cout<<"enter your rollno: "<<endl;
                cin>>rollno;
                cout<<"enter your age: "<<endl;
                cin>>age;
                cout<<"enter your percentage: "<<endl;
                cin>>percentage;
            }
        void showData()
        {
            cout<<"====================\n";
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"rollno: "<<rollno<<endl;
            cout<<"percentage: "<<percentage<<endl;
            cout<<"====================\n";
        }
};
int main() {
    student s1;
    s1.SetData();
    s1.showData();


    return 0;
}