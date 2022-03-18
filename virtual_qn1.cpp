/*1. Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes
and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding
functions area() and display(). Write a suitable program to illustrate virtual functions and virtual destructors.*/
#include<iostream>
using namespace std;
class shape{
    protected:
    float l,b,areaa;
    public:
    shape():l(0),b(0){}
    shape(float len,float bre):l(len),b(bre){}
    virtual void area()=0;
    virtual void display()=0;
    virtual ~shape(){}

};

class circle:public shape
{
float r;
public:

circle():r(0.0){}
circle(float rad):r(rad){}
void area()
{
areaa=3.14*r*r;
}
void display()
{
cout<<"The area of circle is: "<<areaa;
}
virtual ~circle(){}
};

class rectangle:public shape
{
public:
rectangle(){}
rectangle(float l1,float b1):shape(l1,b1){}
void area()
{

areaa=l*b;
}
void display()
{
cout<<"The area of rectangle is "<<areaa;
}
virtual ~rectangle(){}

};
class trapezoid:public shape
{
float l1,l2,h;
public:
trapezoid():l1(0),l2(0),h(0){}
trapezoid(float l11,float l22,float h1):l1(l11),l2(l22),h(h1){}
void area()
{

areaa=(l1+l2)/2*h;
}
void display()
{cout<<"The area of trapezoid is "<<areaa;}
virtual ~trapezoid(){}
};
int main()
{
circle cr(2.1);
rectangle r(3.4,4.3);
trapezoid t(3.1,1.1,1.1);

shape *sh[]={&cr,&r,&t};
for(int i=0;i<3;i++)
{
sh[i]->area();
sh[i]->display();
}
return 0;

}


