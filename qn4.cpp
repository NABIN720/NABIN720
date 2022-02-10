/*Assume that one constructor initializes data member say num_vehicle, hour, and rate. 
There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. 
Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).*/
#include<iostream>
using namespace std;
class gadi{
    private:
    int num_vehicle;
    int hour;
    float rate;
    float charge;
    
    public:
    gadi()
    {
        num_vehicle=0;
        hour=0;
        rate=0;
        charge=0;
    }
    gadi(int x,int y, float z)
    {
        num_vehicle=x;
        hour=y;
        rate=z;
        if(hour>10)
        charge=(rate*hour)-(0.1*rate*hour);
        else
        charge = rate*hour;
    }
    gadi(gadi &g1,gadi &g2)
    {
        cout<<"The total charge of the vehicle 1 is :"<<g1.charge<<endl;
        cout<<"The total charge of the vehicle 2 is :"<<g2.charge<<endl;
    }
};
int main()
{
    gadi g1(123,11,10.5),g2(234,5,10.5);
    gadi g3(g1,g2);
    return 0;
}