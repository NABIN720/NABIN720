/*Write a base class that asks the user to enter a complex number and make a derived class that adds 
the complex number of its own with the base. Finally, make a third class that is a friend of derived 
and calculate the difference of the base complex number and its own complex number.*/
#include<iostream>
using namespace std;
class com_base{
    protected:
    int real1,imag1;
    public:
    void get_data()
    {
        cout<<"Enter the complex number of base class:"<<endl;
        cout<<"Enter the real part: "<<endl;
        cin>>real1;
        cout<<"Enter the imaginary part: "<<endl;
        cin>>imag1;
    }
    void show_data()
    {
        cout<<real1<<"+"<<imag1;
    }
};
class com_derived:public com_base
{
    private:
    int real1,imag1;
    public:
    void get_data()
    {
        com_base::get_data();
        cout<<"\nEnter the complex number for derived class: "<<endl;
        cout<<"Enter real part: ";
        cin>>real1;
        cout<<"Enter imaginary part: ";
        cin>>imag1;
    }
    com_derived adds(void)
    {
        com_derived temp;
        temp.real1=real1+com_base::real1;
        temp.imag1=imag1+com_base::imag1;
        return temp;
    }
    void show_data()
    {
        cout<<real1<<"+ j"<<imag1;
    }
    friend class com_der2;
};
class com_der2{
    private:
    int real,imag;
    public:
    void get_data()
    {
        cout<<"\nEnter complex for friend class: "<<endl;
        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter imaginary part: ";
        cin>>imag;
    }
    com_der2 subtract(com_derived c)
    {
        com_der2 temp;
        temp.real=real-c.com_base::real1;
        temp.imag=imag-c.com_base::imag1;
        return temp;
    }
    void display()
    {
        cout<<real<<"+j"<<imag;
    }
};
int main()
{
    com_derived c,d;
    com_der2 e,f;
    c.get_data();
    d=c.adds();
    cout<<"After addition the result is: "<<endl;
    d.show_data();
    cout<<endl;
    f.get_data();
    e=f.subtract(c);
    cout<<"Result after addition is: "<<endl;
    e.display();
    return 0;
}