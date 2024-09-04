#include<iostream>
using namespace std;
int main(){
    int rem,f,l;
    float sum=0.0;
    cout<<"Enter Limit: ";
    cin>>l;
    for(int i=2;i<=l;i++){
        f=1;
        for(int j=1;j<=i;j++)
            f *= j;
        sum = sum + (1.0/float(f));
    }
    cout<<"Sum = "<<sum+1<<endl;
}