/*    Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict.*/

#include<iostream>
using namespace std;
class second;
class first{
    protected:
    float x,y;
    public:
    first(){x=0;y=0;}
    first(float a,float b){
        x=a;
        y=b;
    }
    friend void add(first,second);
    friend void mul(first,second);
    friend void sub(first,second);
};
class second{
    protected:
    float x,y;
    public:
    second()
    {
        x=0;
        y=0;
    }
    second(float a,float b)
    {
        x=a;
        y=b;
    }
    friend void add (first,second);
    friend void mul(first,second);
    friend void sub(first,second);
};
void add(first f,second s)
{
    float x=f.x+s.x;
    float y=f.y+s.y;

    cout<<"The addition of catesian coordinates are (x,y)=";
    cout<<x<<y<<endl;
}

void mul(first f,second s)
{
    float x=f.x*s.x;
    float y=f.y*s.y;

    cout<<"The multiplication of ordinates are (x,y)="<<x<<","<<y<<endl;
}

void sub(first f,second s){
    float x=f.x-s.x;
    float y=f.y-s.y;

    cout<<"The subtraction of ordinates are (x,y)="<<x<<","<<y<<endl;    
}


int main()
{
    first f;
    second s;
    first fp(5.5,6.5);
    second sp(1.1,2.1);
    add(fp,sp);
    mul(fp,sp);
    sub(fp,sp);
    return 0;
}