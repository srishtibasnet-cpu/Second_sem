/*Create a class name box that represents its length and volume 
it should have constructor both defualt and parametrize to initialize the 
object and it should have static data member that keeps track of
numbers of object created */

#include <iostream>
#include <string>
using namespace std;

class box
{
private:
    float length;
    float volume;

public:
    box() {}   // default constructor

    void setData(float length = 0.00,
                    float volume = 0.00)
    {
        this->length = length;
        this->volume = volume;
    
    }

    void showData();

    ~box()
    {
        cout << "destructor called" << endl;
    }
};

void box::showData()
{
    cout << "Volume: "<<length*length*length;

}


int main()
{
    box b1;

    b1.setData(2.2);
    b1.showData();

    return 0;
}