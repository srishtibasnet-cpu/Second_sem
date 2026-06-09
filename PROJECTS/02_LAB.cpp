/*Create a class named "TIME" having data members day, hr, min and sec. Now WAP to add two objects of class by
passing them to function and initialize data members using constructor and also use the concept of 'this'
pointer to point the current object. Also show the invocation of destructor.*/
#include <iostream>
using namespace std;

class TIME
{
    private:
    int day,hr,min,sec;

    public:

    TIME(){}

    TIME(int day, int hr, int min, int sec )
        {
            this->day = day;
            this->hr = hr;
            this->min = min;
            this->sec = sec;
        }
     TIME add(TIME t)
    {
        TIME temp;
        temp.sec=t.sec+sec;
        temp.min=t.min+min+temp.sec/60;
        temp.sec=temp.sec%60;
        temp.hr=t.hr+hr+temp.min/60;
        temp.min = temp.min%60;
        temp.day = t.day+day+temp.hr/24;
        temp.hr = temp.hr%24;
        return temp;

    }
    void showData()
    {
        cout<<"Day: "<<day<<endl;
        cout<<"Hour: "<<hr<<endl;
        cout<<"Minute: "<<min<<endl;
        cout<<"Second: "<<sec<<endl;
    }
     ~ TIME()
     {
        cout<<"Destructor called";
     }

};
int main() {

    TIME t1(12,12,34,50),t2(2,34,45,44),t3;
   t3= t1.add(t2);
   t3.showData();
   
   
    

    
    return 0;
}