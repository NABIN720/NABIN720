/*Write a program to compare two objects of a class that contains an integer value as its data member.
 Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), 
greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.*/
#include<iostream>
using namespace std;

class compare{
    private:
    int x;
    public:
    compare():x(0){}
    compare(int a):x(a){}
    bool operator == (compare);
    bool operator < (compare);
    bool operator > (compare);
    bool operator != (compare);
    bool operator >= (compare);
    bool operator <= (compare);

};
bool compare::operator==(compare c2)
{
    if(x==c2.x)
    return true;
    else 
    return false;
}
bool compare::operator<(compare c2)
{
    if(x<c2.x)
    return true;
    else 
    return false;
}bool compare::operator>(compare c2)
{
    if(x>c2.x)
    return true;
    else 
    return false;
}bool compare::operator!=(compare c2)
{
    if(x!=c2.x)
    return true;
    else 
    return false;
}bool compare::operator>=(compare c2)
{
    if(x>=c2.x)
    return true;
    else 
    return false;
}bool compare::operator<=(compare c2)
{
    if(x<=c2.x)
    return true;
    else 
    return false;
}
int main()
{
    compare c1(9),c2(8);
    if(c1>=c2)
    {
        cout<<"C1 greater and equal to C2";
    }
    return 0;
}