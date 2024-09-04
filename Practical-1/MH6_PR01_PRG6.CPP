#include<iostream>
using namespace std;
int main(){
    int rem,sum=0,num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=num;i>0;i/=10){
        rem = i % 10;
        sum += rem;
    }
    cout<<"Sum of Digit is "<<sum<<endl;
}