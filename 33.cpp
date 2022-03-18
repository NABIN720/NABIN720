/*Write a program with an abstract class Student and create derive classes Engineering, Medicine and 
Science from base class Student. Create the objects of the derived classes and process them and access
them using an array of pointers of type base class Student.*/
#include<iostream>
using namespace std;
class Student{
    public:
    virtual void show()=0;
};
class Engineering:public Student
{
    public:
    void show()
    {
        cout<<"I am engineering student."<<endl;
    }
};
class Medicine:public Student
{
    public:
    void show()
    {
        cout<<"I am medicine student."<<endl;
    }
};
class Science:public Student
{
    public:
    void show()
    {
        cout<<"I am science student."<<endl;
    }
};
int main()
{
    Engineering e;
    Science s;
    Medicine m;
    Student *sptr;
    sptr=&e;
    sptr->show();
    sptr=&s;
    sptr->show();
    sptr=&m;
    sptr->show();
    return 0;
}
