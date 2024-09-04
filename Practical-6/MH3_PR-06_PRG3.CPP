#include<iostream>
#include<string.h>
using namespace std;
class LED
{
protected:
    char Company[20];
    float inch,price;
public:
    void GetDet(){
        cout<<"Enter Company Name: ";
        cin>>Company;
        cout<<"Enter Inch of TV: ";
        cin>>inch;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void show(){
        cout<<"Company = "<<Company<<endl;
        cout<<"Inch of TV = "<<inch<<endl;
        cout<<"LED Tv Price = "<<price<<endl;
    }
};
class LCD : protected LED
{
public:
    void GetDet(){
        cout<<"Enter Company Name: ";
        cin>>Company;
        cout<<"Enter Inch of TV: ";
        cin>>inch;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void show(){
        cout<<"Company = "<<Company<<endl;
        cout<<"Inch of TV = "<<inch<<endl;
        cout<<"LCD Tv Price = "<<price<<endl;
    }
};
class TV : protected LCD
{
public:
    void showDet(char Types[])
    {
        if ((!strcmp(Types,"LED")) || (!strcmp(Types,"led")))
        {
            LED::GetDet();
            LED::show();
        }
        else if (!(strcmp(Types,"LCD")) || (!strcmp(Types , "lcd")))
        {
            LCD::GetDet();
            LCD::show();
        }
        else
        {
            cout<<"Invalid: "<<endl;
        }
        
    }
   
};
int main(){
    TV T[2];
    char Tp[4];
    cout<<"Enter Types of Tv: (1.LED || 2.LCD): ";
    cin>>Tp;
    for (int i = 0; i < 2; i++)
    {
        T[i].showDet(Tp);   
    }  
}