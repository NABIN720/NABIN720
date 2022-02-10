/*    Write a program that illustrates the following relationship and comment on them. 

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function
*/
#include<iostream>
using namespace std;
class nay{
    const int x;
    public:
    nay(int a):x(a){}
    void fun1()
    {
        cout<<"The value of x is "<<x<<endl;
    }
    void fun2()const{cout<<"The value of x is "<<x<<endl;}
};
int main()
{
    nay n1(1);
    n1.fun1();
    n1.fun2();
    const nay n2(5);
    //n2.fun1();//constant object can only access constant function
    n2.fun2();
}