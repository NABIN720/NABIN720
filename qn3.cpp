/*Write a class that can store Department ID and Department Name with constructors to initialize its
 members. Write destructor member in the same class and display the message "Object n goes out of the
  scope". Your program should be made such that it should show the order of constructor and destructor
   invocation.*/
#include<iostream>
#include<cstring>
using namespace std;
class dep{
    private:
    int dep_id;
    string dep_name;
    
    public:
    dep(int x,string y)
    {
        dep_id=x;
        dep_name=y;
        cout<<"constructor and initialized"<<endl;
    }
    void display()
    {
        cout<<"DEP-ID :"<<dep_id<<endl;
        cout<<"DEP-NAME :"<<dep_name<<endl;
    }
    ~dep()
    {
        cout<<"object goes out of the scope";
    }
};
int main()
{
    dep d1(1,"nabin dep and enterprises");
    d1.display();
    //at first constructor is called and main function executeeees and destructor is called..
    return 0;
}