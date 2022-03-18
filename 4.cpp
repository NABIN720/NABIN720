/*Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle.
 Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.*/
#include<iostream>
#include<typeinfo>
using namespace std;
class Vehicle{
    public:
    virtual void fun(){}
};
class Bus:public Vehicle{};
class Car:public Vehicle{};
int main()
{
    Vehicle *vu,v;
    Car *cu,c;
    vu=&c;//base pointer points to derived object 
    cu=dynamic_cast<Car *>(vu);//cast to derived pointer
    if(cu)
    {
        cout<<"Cast sucessful:"<<endl;
    }
    else
    {
        cout<<"Cast failed"<<endl;
    }
    int kmph,gears;
    float average_milage;
    char *str;
    Bus b;
    cout<<"\nFinding types with typeid"<<endl;
    cout<<"...................................................."<<endl;
    cout<<"type of kmph is:"<<typeid(kmph).name()<<endl;
    cout<<"type of gears is:"<<typeid(gears).name()<<endl;
    cout<<"type of average milage is:"<<typeid(average_milage).name()<<endl;
    cout<<"type of *str is:"<<typeid(*str).name()<<endl;
    cout<<"type of str is:"<<typeid(str).name()<<endl;
    cout<<"type of vu is:"<<typeid(vu).name()<<endl;

    cout<<"Finding types of polymorphic::"<<endl;
    cout<<"---------------------------------------------"<<endl;
    vu=&c;
    cout<<"type of *vu when pointing to c is:"<<typeid(*vu).name()<<endl;
    vu=&b;
    cout<<"type of *vu when pointing to b is:"<<typeid(*vu).name()<<endl;
    cout<<"\nComparing types with typeid"<<endl;
    cout<<"..............................................."<<endl;
    if(typeid(kmph)==typeid(gears))
    cout<<"Type of kmph and gears is same"<<endl;
    else
    cout<<"Type of kmph and gears is not same";
    return 0;
    
}