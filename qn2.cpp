/*Write a class to store x, y, and z coordinates of a point in three-dimensional space.
 Overload addition and subtraction operators for addition and subtraction of two coordinate objects. 
Implement the operator functions as non-member functions (friend operator functions).*/
#include<iostream>
using namespace std;
class coordina{
    protected:
    int x,y,z;
    public:
    coordina():x(0),y(0),z(0){}
    coordina(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    friend coordina operator + (coordina,coordina);
    friend coordina operator - (coordina,coordina);
    void showcor()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;

    }
};
coordina operator + (coordina c2,coordina c3)
{
    int xc=c3.x+c2.x;
    int yc=c3.y+c2.y;
    int zc=c3.x+c2.z;
    return coordina(xc,yc,zc);
}
coordina operator - (coordina c2,coordina c3)
{
    int xc=c3.x-c2.x;
    int yc=c3.y-c2.y;
    int zc=c3.x-c2.z;
    return coordina(xc,yc,zc);
}
int main()
{
    coordina c1(1,2,3),c2(4,5,6),c3,c4;
    c3=c1+c2;
    c4=c1-c2;
    cout<<"sum is ";c3.showcor();
    cout<<"diff is ";c4.showcor();
    return 0;
}
