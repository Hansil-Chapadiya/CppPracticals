#include<iostream>
using namespace std;
class Fahrenheit;
class Celcuis
{
private:
    float cel;
public:
   void Get();
   friend void Comp(Celcuis,Fahrenheit);
};
void Celcuis::Get(/* args */)
{
    cout<<"Enter Celcuis: ";
    cin>>cel;
}

class Fahrenheit
{
private:
    float fah;
public:
    void Get();
    friend void Comp(Celcuis,Fahrenheit);
};
void Fahrenheit::Get()
{
    cout<<"Enter Fahrenheit: ";
    cin>> fah;
}
void Comp(Celcuis c,Fahrenheit f){
    float ctf;
    ctf = ((c.cel*1.8)+32);
    cout<<"Fahrenheit: "<<ctf<<endl;
    cout<<"Celcuis: "<<c.cel<<endl;
    if (ctf > f.fah)
    {
        cout<<"Celcuis is Colder";
    }
    else
    {
        cout<<"Fahrenheit is Colder";
    }   
}
int main(){
    Celcuis C1;
    Fahrenheit F1;
    C1.Get();
    F1.Get();
    Comp(C1,F1);
}
