#include<iostream>
using namespace std;
int Mul(int a,int b){
    if(b==1)
        return a;
    else
        return a + Mul(a,b-1);
}
int main(){
    int n1,n2;
    cout<<"Enter Num1: ";
    cin>>n1;
    cout<<"Enter Num2: ";
    cin>>n2;
    cout<<"Addition = "<<Mul(n1,n2);
}