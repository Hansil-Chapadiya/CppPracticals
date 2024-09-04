#include<iostream>
using namespace std;
int power(int a,int n){
    if(n==1)
        return a;
    else 
        return a * power(a,n-1);
}
int main(){
    int a,n;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Limit: ";
    cin>>n;
    cout<<"Ans = "<<power(a,n);
}