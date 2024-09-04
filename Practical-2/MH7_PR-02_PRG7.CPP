#include<iostream>
using namespace std;
int Add(int a,int b){
    if(b==0)
        return a;
    else
        return 1  +  Add(a,b-1);
}
int main(){
    int n1,n2;
    cout<<"Enter Num1: ";
    cin>>n1;
    cout<<"Enter Num2: ";
    cin>>n2;
    cout<<"Addition = "<<Add(n1,n2);
}