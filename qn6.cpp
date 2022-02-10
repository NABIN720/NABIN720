/*    Create a class with a data member to hold a "serial number" for each object created from the 
class. That is, the first object created will be numbered 1, the second 2, and so on by using the
 basic concept of static data members. Use static member function if it is useful in the program.
  Otherwise, make a separate program that demonstrates the use of static member function.*/
#include<iostream>
using namespace std;
class stat{
    static int a;
    int b=0;
    public:
    stat()
    {
        a++;
        b=a;
    }
    void display()
    {
        cout<<"Serial number: "<<b<<endl;
    }
};
int stat::a=0;
int main()
{
    stat s1,s2,s3,s4;
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}

 