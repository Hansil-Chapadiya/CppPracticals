#include<iostream>
using namespace std;
void CallByValSwap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void CallByAddSwap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void CallByRefSwap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int n1,n2;
    cout<<"Swapping:"<<endl;
    cout<<"Enter Num 1: ";
    cin>>n1;
    cout<<"Enter Num 2: ";
    cin>>n2;
    //CallByValue
    cout<<endl<<"Call By Value: "<<endl;
    cout<<"Before Swapping: "<<endl<<"Num1 = "<<n1<<endl<<"Num2 = "<<n2<<endl;
    CallByValSwap(n1,n2);
    cout<<"After Swapping: "<<endl<<"Num1 = "<<n1<<endl<<"Num2 = "<<n2<<endl<<endl;

    //CallbyAddress
    cout<<"Call By Address: "<<endl;
    cout<<"Before Swapping: "<<endl<<"Num1 = "<<n1<<endl<<"Num2 = "<<n2<<endl;
    CallByAddSwap(&n1,&n2);
    cout<<"After Swapping: "<<endl<<"Num1 = "<<n1<<endl<<"Num2 = "<<n2<<endl<<endl;

    //CallByReference
    cout<<"Call By Reference: "<<endl;
    cout<<"Before Swapping: "<<endl<<"Num1 = "<<n1<<endl<<"Num2 = "<<n2<<endl;
    CallByRefSwap(n1,n2);
    cout<<"After Swapping: "<<endl<<"Num1 = "<<n1<<endl<<"Num2 = "<<n2<<endl;

}