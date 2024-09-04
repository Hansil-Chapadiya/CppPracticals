#include<iostream>
using namespace std;
void ADD(int n1,int n2){
    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
}
void ADD(double n1, double n2){
    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
}
void ADD(double n1, int n2){
    cout<<n1<<" + "<<n2<<" = "<<n1+float(n2)<<endl;
}
int main(){
    cout<<"Addition of Two Integers: "<<endl;
    ADD(10,12);
    cout<<"Addition of Two Floats: "<<endl;
    ADD(12.5,23.6);
    cout<<"Addition of one floats and one integer: "<<endl;
    ADD(36.23,34);
    return 0;
}