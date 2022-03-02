/*Write three derived classes inheriting functionality of base class person (should have a member 
function that asks to enter name and age) and with added unique features of student, and employee, 
and functionality to assign, change and delete records of student and employee. And make one member 
function for printing the address of the objects of classes (base and derived) using this pointer. 
Create two objects of the base class and derived classes each and print the addresses of individual 
objects. Using a calculator, calculate the address space occupied by each object and verify this with
 address spaces printed by the program.*/
#include<iostream>
using namespace std;
class person{
    protected:
    char name[25];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter the name";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;

    }
    void showdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age;
    } 
    void print_address()
    {
        cout<<"The address of the object is "<<this;
    }

};
class student:public person
{
    protected:
    int ID;
    public:
    void getdata()
    {
        cout<<"Enter the information of student:\n";
        person::getdata();
        cout<<"Enter the student id";
        cin>>ID;
    }
    void showdata()
    {
        cout<<"The information for student is "<<endl;
        person::showdata();
        cout<<"\nid ="<<ID;
    }
};
class employee:public person{
    protected:
    float salary;
    public:
    void getdata()
    {
        cout<<"Enter the information of employee"<<endl;
        person::getdata();
        cout<<"Enter the employee salary:"<<endl;
        cin>>salary;

    }
    void showdata()
    {
        cout<<"\nThe information of an employee is:";
        person::showdata();
        cout<<"\nsalary  "<<salary<<endl;

    }
};
int main()
{
    student s;
    employee e;
    s.getdata(); 
    s.showdata();
    e.getdata();
   
    e.showdata();
    s.print_address();
    e.print_address();
    return 0;
}
