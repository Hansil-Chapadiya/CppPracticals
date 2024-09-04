#include<iostream>
using namespace std;
//Practical-6.2-------------------------------
class shirt
{
protected:
    int type;
    float price;
public:
    void GetType(){
        cout<<"Enter Type of Shirt: (1. Full Sleeve: 2. Half Sleeve:)";
        cin>>type;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void ShowType(){
       if (type==1)
        {
            cout<<"Types of T-shirt: Full Sleeve "<<endl;
        }
        else{
            cout<<"Types of T-shirt: Half Sleeve "<<endl;
        }
        cout<<"Shirt's Price = "<<price<<endl;
    }
};
class Tshirt : public shirt
{
public:
    void GetType(){
        cout<<"Enter Type of T-Shirt: (1. Full Sleeve: 2. Half Sleeve:)";
        cin>>type;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void ShowType(){
        if (type==1)
        {
            cout<<"Types of T-shirt: Full Sleeve "<<endl;
        }
        else{
            cout<<"Types of T-shirt: Half Sleeve "<<endl;
        }
        cout<<"T-shirt's Price = "<<price<<endl;
    }
};
class Jeans
{
private:
    int size;
    float price;
public:
    void getSize(){
        cout<<"Enter Size of Jeans: ";
        cin>>size;
        cout<<"Enter Price: ";
        cin>>price;
    }
    void ShowSize(){
        cout<<"Jeans's Size: "<<size<<endl;
        cout<<"Jeans's Price: "<<price<<endl;
    }
};
class clothes : public Tshirt , public Jeans
{
public:
    void show(int i=1){
        if (i)
        {
            shirt::GetType();
            shirt::ShowType();
        }
        else
        {
            Tshirt::GetType();
            Tshirt::ShowType();
        }
        Jeans::getSize();
        Jeans::ShowSize();
    } 
};
int main(){
    clothes C1,C2;
    C1.show(1);
    C2.show(0);
}
