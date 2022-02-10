/*Write a program that has a class to represent time. 
The class should have constructors to initialize data members hour, minute, and second to 
0 and to initialize them to values passed as arguments. The class should have a member function to
 add time objects and return the result as a time object.
 There should be functions to display time in 12-hour and 24-hour format.*/
#include<iostream>
using namespace std;
class Time{
    private:
    int hr,min,sec,count=0;
    public:
    Time(int hrs=0,int mins=0,int secs=0){hr=hrs,min=mins,sec=secs;}
  
    Time add_time(Time t)
    {
        Time temp;
        temp.sec=sec+t.sec;
        temp.min=min+t.min;
        temp.hr=hr+t.hr;
        if(temp.sec>60)
        {
            temp.sec-=60;
            temp.min++;
        }
        if(temp.min>60)
        {
            temp.min-=60;
            temp.hr++;
        }
        if(temp.hr>12)
        {
            temp.hr-12;
            count++;
        }

        return temp; 
       

    }
    void hr12_display()
    {
        cout<<hr<<" : "<<min<<" : "<<sec;
    }
    void hr24_display()
    {
        if(count>0)
        cout<<hr+12<<" : "<<min<<" : "<<sec;
        else
         cout<<hr<<" : "<<min<<" : "<<sec;

    }
    

};
int main()
{
    int frmat;
    Time tt();
    Time t1(1,30,23), t2(2,22,48),t3;
    t3=t1.add_time(t2);
   
    cout<<"Format::12 or 24"<<endl;
    cin>>frmat;
    if(frmat==12)
    {
        t1.hr12_display();
        cout<<endl;
        t2.hr12_display();
        cout<<endl;
        t3.hr12_display();
        cout<<endl;
    }
    else{
    

    t1.hr24_display();
    cout<<endl;
    
    
   
    t2.hr24_display();
    cout<<endl;
    
    
    t3.hr24_display();
    cout<<endl;
    }

    return 0;
    




}