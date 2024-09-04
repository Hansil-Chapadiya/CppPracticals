#include<iostream>
using namespace std;
class GET;
class ACC
{
private:
    char name[10];
    
    float bal;
public:
    void Get(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Balance: ";
        cin>>bal;
    }
    friend void show(ACC,GET);
};
class GET
{
private:
    int ac_no;
public:
   void Get(){
        cout<<"Enter Account No:";
        cin>>ac_no;
   }
   friend void show(ACC,GET);
};
void show(ACC B,GET G){
        cout<<"Balance of Acc_No "<<G.ac_no<<"is RS."<<B.bal;
        cout<<B.name;
    }

int main(){
    ACC B;
    B.Get();
    GET G;
    G.Get();
    show(B,G);
}