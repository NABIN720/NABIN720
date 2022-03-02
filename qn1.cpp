/*Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and
vice versa. Make a class distance with two data members, meter and centimeter. You can add function 
members as per your requirement.*/
#include<iostream>
using namespace std;
class Distance{
    float meter,centimeter;
    public:
    Distance():meter(0),centimeter(0){}
    Distance(float mete)
    {
        meter=static_cast<int>(mete);
        centimeter=static_cast<int>(mete-meter)*100;
    }
    void getdata()
        {
            cout<<"Enter value of meter ";cin>>meter;
            cout<<"Enter the value of centimeter ";cin>>centimeter;
        }
    operator float()
    {
        float mete;
        mete=meter+centimeter/100;
        return mete;
    }
    void display(void)
    {
        cout<<"Meter: "<<meter<<"Centimeter: "<<centimeter;
    }
    
};
int main()
{
    Distance d;
    float m;
    int temp;
    cout<<"1. conversion for (meter,centimeter) to centimeter"<<endl;
    cout<<"2. conversion for (meter,centimeter) to meter"<<endl;
    cout<<"Enter choice";
    cin>>temp;
    switch(temp)
    {
        case 1:
        d.getdata();
        m=d;
        cout<<"The distance in meter is: "<<m;
        break;
        case 2:
        cout<<"Enter the values in metres: ";
        cin>>m;
        d=m;
        d.display();
        break;
        default:
        cout<<"Enter either 1 or 2"<<endl;
        cout<<"You entered: ";
        cin>>temp;
        break;
    }
    return 0;
}