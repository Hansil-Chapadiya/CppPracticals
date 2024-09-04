#include<iostream>
using namespace std;
class Device
{
protected:
    int Dev_Id;
public:
   void getID(){
       cout<<"Enter Device Id: ";
       cin>>Dev_Id;
   }
   void putID(){
       cout<<"Device Id = "<<Dev_Id<<endl;
   }
};
class Laptop : public Device
{
protected:
    char Company[20];
    float price;
public:
    void getDetails(){
        cout<<"Enter Company Name: ";
        cin>>Company;
        cout<<"Enter Price of Laptop: ";
        cin>>price;
    }
    void showDetails(){
        cout<<"Company = "<<Company<<endl;
        cout<<"Price = "<<price<<endl;
    }
};
class OS : public Laptop
{
private:
    char OS_Type[20];
    int Qun;
public:
    void getType(){
        cout<<"Enter Details for Laptop: "<<endl;
        getID();
        getDetails();
        cout<<"Enter OS_Type: ";
        cin>>OS_Type;
        cout<<"Enter Quantity: ";
        cin>>Qun;
    }  
    void putType(){
        putID();
        showDetails();
        cout<<"OS_Type = "<<OS_Type<<endl;
        cout<<"Quantity = "<<Qun<<endl;
    }
};
class TV : public Device
{
protected:
    char Company[20];
    float price;
public:
     void getDetails(){
        cout<<"Enter Company Name: ";
        cin>>Company;
        cout<<"Enter Price of TV: ";
        cin>>price;
    }
    void showDetails(){
        cout<<"Company = "<<Company<<endl;
        cout<<"Price = "<<price<<endl;
    }
};
class TV_Type : public TV
{
private:
    char TV_Type[20];
    int Qun;
public:
   void getType(){
        cout<<"Enter Details for TV: "<<endl;
        getID();
        getDetails();
        cout<<"Enter TV_Type: ";
        cin>>TV_Type;
        cout<<"Enter Quantity: ";
        cin>>Qun;
    }  
    void putType(){
        putID();
        showDetails();
        cout<<"TV_Type = "<<TV_Type<<endl;
        cout<<"Quantity = "<<Qun<<endl;
    }
};
class Phone : public Device
{
protected:
    char Company[20];
    float price;
public:
     void getDetails(){
        cout<<"Enter Company Name: ";
        cin>>Company;
        cout<<"Enter Price of Phone: ";
        cin>>price;
    }
    void showDetails(){
        cout<<"Company = "<<Company<<endl;
        cout<<"Price = "<<price<<endl;
    } 
};
class Phone_OS : public Phone
{
private:
   char Phone_OS[20];
   int Qun;
public:
    void getType(){
        cout<<"Enter Details for CellPhone: "<<endl;
        getID();
        getDetails();
        cout<<"Enter Phone_OS_Type: ";
        cin>>Phone_OS;
        cout<<"Enter Quantity: ";
        cin>>Qun;
    }  
    void putType(){
        putID();
        showDetails();
        cout<<"Phone_OS_Type = "<<Phone_OS<<endl;
        cout<<"Quantity = "<<Qun<<endl;
    }
};
int main(){
    OS O1;
    O1.getType();
    O1.putType();
    cout<<endl;
    TV_Type T1;
    T1.getType();
    T1.putType();
    cout<<endl;
    Phone_OS P1;
    P1.getType();
    P1.putType();
}


