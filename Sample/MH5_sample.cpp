#include<iostream>
using namespace std;
class Base
{
private:
    int a;
protected:
    int b;
public:
    void get(){
        cout<<"Enter Number from Base: ";
        cin>>a>>b;
    }
    void show(){
        cout<<"Number of Base: "<<a<<" "<<b<<endl;

    }
};
class der : public Base
{
private:
    int a1;
protected:
    int b1;
public:
    void get(){
        cout<<"Enter Number from Derived: ";
        cin>>a1>>b1;
    }
    void show(){
        //Not accessed
        cout<<"Number of Der(a(Private),b,a1,b1): "<<b<<" "<<a1<<" "<<b1<<endl;
    }   
};
class der1 : protected der
{
private:
    int a2;
protected:
    int b2;
public:
    void get(){
        Base::get();
        cout<<"Enter Number from Derived1: ";
        cin>>a2>>b2;
    }
    void show(){
        cout<<"Number of Der(a(Private),b,a2,b2): "<<b<<" "<<a2<<" "<<b2<<endl;
    }   
};
int main(){
    der d1;
    d1.Base::get();
    d1.get();
    d1.show();
}