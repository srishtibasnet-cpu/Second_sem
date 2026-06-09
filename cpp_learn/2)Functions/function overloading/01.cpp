#include <iostream>
using namespace std;

float area(float length, float breadth){
    cout<<"Area: "<< length * breadth <<endl;
}
float area (float radius){
    cout<<"Area: "<< 3.14*radius*radius<<endl;
}
int main() {
    area(2.2);
    area(2.5, 2.0);

    return 0;
}