/*Create a class Person and two derived classes Employee and Student, inherited from class Person. 
Now create a class Manager which is derived from two base classes Employee and Student. Show the use 
of the virtual base class.*/
#include<iostream>
using namespace std;
class Person{
    protected:
    char name[25];
    int age;
    public:
    void getdata()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter age: ";
        cin>>age;
    }
    void showdata()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};
class Employee:virtual public Person
{
    protected:
    int emp_id;
    int salary;
    public:
    void getsdata()
    {
        cout<<"\nEnter the emp_id: ";
        cin>>emp_id;
        cout<<"\nEnter salary: ";
        cin>>salary;
    }
    void showsdata()
    {
        Person::showdata();
        cout<<"Emp_id= "<<emp_id<<endl;
        cout<<"Salary= "<<salary<<endl;
    }
};
class Student:virtual public Person
{
    protected:
    int roll;
    public:
    void getsdata()
    {
        cout<<"\nEnter roll";
        cin>>roll;
    }
    void showsdata()
    {
        Person::showdata();
        cout<<"\nRoll: "<<roll;
    }
};
class Manager:public Employee,public Student
{
    public:
    void getsdata()
    {
        Employee::getsdata();
        Student::getsdata();
    }
    void showsdata()
    {
        Employee::showsdata();
        Student::showsdata();
    }

};
int main()
{
    Manager m;
    cout<<"Enter data for person: "<<endl;
    m.getdata();
    cout<<"Enter data for Employee: "<<endl;
    m.Employee::getsdata();
    cout<<"Enter data for Student: "<<endl;
    m.Student::getsdata();
    cout<<"*******************************************************"<<endl;
    cout<<"Data for person:"<<endl;
    m.showdata();
    cout<<"\nData for Employee: "<<endl;
    m.Employee::showsdata();
    cout<<"\nData for Student: "<<endl;
    m.Student::showsdata();
    return 0;
}