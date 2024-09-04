#include<iostream>
using namespace std;
class info
{
protected:
    char name[20];
    int age;    
public:
    void get(){cout<<"Enter name: "; cin>>name;}
    void put(){cout<<"Name: "<<name;}
};
class detail : public info{
private:
    float weight;
    float height;
public:
    void get(){cout<<"Enter Weight in kg: "; cin>>weight; cout<<"Enter Height in m: "; cin>>height;}
    void put(){cout<<"Height = "<<height; cout<<"Weight = "<<weight;}
};
int main(int argc, char const *argv[])
{
    detail D1;
    D1.info::get();
    D1.get();
    D1.info::put();
    D1.put();
    return 0;
}

