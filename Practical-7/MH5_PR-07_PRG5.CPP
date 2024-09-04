#include<iostream>
using namespace std;
class Cash
{
private:
    int rupee;
    int paisa;
public:
    Cash(): rupee(0),paisa(0) {cout<<"Defualt Constructor is called"<<endl;};
    Cash(Cash &c2){
        cout<<"Copy Constructor Called: "<<endl;
        rupee = c2.rupee;
        paisa = c2.paisa;
    }
    void input(){
        cout<<"Enter rupee: ";
        cin>>rupee;
        cout<<"Enter paisa: ";
        cin>>paisa;
    }
    void operator =(Cash &c1){
        cout<<"Assignment operator: "<<endl;
        if (c1.paisa>=100)
        {
            c1.rupee += c1.paisa/100;
            c1.paisa %= 100;
        }
        rupee = c1.rupee;
        paisa = c1.paisa;
    }
    void show(){
        cout<<"Rupee : "<<rupee<<endl<<"paisa : "<<paisa<<endl;
    }
};
int main(){
   Cash c1;
   c1.input();
   c1.show();
   Cash c2;
   c2 = c1;
   c2.show();
   c1.show();

}

