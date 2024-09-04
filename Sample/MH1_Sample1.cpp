#include<iostream>
using namespace std;
class Dist
{
private:
    int feet;
    int inch;
public:
    Dist();
    Dist(int,int);
};

Dist::Dist()
{
    feet=inch=0;
    cout<<"Default Constructer Called"<<endl;
}

Dist::Dist(int f=0,int i=0)
{
    feet=f;
    inch=i;
    cout<<"Parameterized construter called"<<endl;
}
int main(){
    Dist d3(2,4);
}
