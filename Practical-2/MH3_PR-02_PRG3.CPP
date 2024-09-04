#include<iostream>
using namespace std;
int pow(int a=2, int n=2){
    int ans=1;
    for (int i = 0; i < n; i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,n;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>n;
    cout<<"By given one value:"<<endl;
    cout<<a<<"^2"<<"="<<pow(a)<<endl;
    cout<<"By given two value:"<<endl;
    cout<<a<<"^"<<n<<"="<<pow(a,n)<<endl;
    cout<<"By given no value: "<<endl;
    cout<<"2^2="<<pow();
}