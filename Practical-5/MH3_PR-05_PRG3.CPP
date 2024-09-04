#include<iostream>
using namespace std;
class Distance
{
private:
    int m;
    int cm;
public:
    Distance(int,int);
    Distance(Distance &);
    void Get();
    void Show();
};
void Distance :: Get(){
    cout<<"Enter meter: ";
    cin>>m;
    cout<<"Enter Centimeter: ";
    cin>>cm;
}
void Distance :: Show(){
    cout<<"Meter = "<<m<<endl;
    cout<<"Centimeter = "<<cm;
}

Distance::Distance(int mm=0,int cmm=0)
{
        m=mm;
        cm=cmm;
        cout<<"Parameterized Constructer is Called"<<endl;
}
Distance::Distance(Distance &DD2){
        m=DD2.m;
        cm=DD2.cm;
        cout<<endl<<"Copy Constructer is Called"<<endl;
}

int main(){
    Distance D1(2,4);
    D1.Get();
    D1.Show();
    Distance D2 = D1;
    D2.Show();
}
