/*Create a class name box that represents its length and volume 
it should have constructor both defualt and parametrize to initialize the 
object and it should have static data member that keeps track of
numbers of object created */

#include <iostream>
#include <string>
using namespace std;

class box
{
{
    box(float x):length(x)
    count++;
}


    void showData(){
        cout<<"length: "<<length<<"  "<<"volume: "<<volume<<endl<<" number of object:"<<count<<endl;

    }

    ~box(){cout<<"object destroyed"<<endl;}
};
int box::count=0; //initialize the static var outside the class


int main()
{
box b1(10), b2(20), b3;
b1.showData();
b2.showData();
b3.showData();

    return 0;
}