#include<iostream>
using namespace std;
class Rupee;
class Dollar;
class Rupee
{
private:
    int rup;
public:
   void Get(){
       cout<<"Enter Rupee: ";
       cin>>rup;
   }
   friend void Comp(Rupee,Dollar);
};
class Dollar
{
private:
    int doll;
public:
    void Get(){
        cout<<"Enter Dollar: ";
        cin>>doll; 
    }
    friend void Comp(Rupee,Dollar);
};
void Comp(Rupee rr,Dollar dd){
    int r;
    r = dd.doll * 70;
    if (rr.rup > r)
    {
        cout<<"Rupee is Greater than Dollar";
    }
    else
    {
        cout<<"Dollar is Greater than Rupee";
    }
}
int main(){
    Rupee R1;
    Dollar D1;
    R1.Get();
    D1.Get();
    Comp(R1,D1);
}

 