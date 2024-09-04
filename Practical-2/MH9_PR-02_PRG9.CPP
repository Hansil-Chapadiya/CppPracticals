#include<iostream>
using namespace std;
int &smallzero(int &n1,int &n2){
    if(n1<n2)
        return n1;
    else
        return n2;
}
int main(){
    int num1,num2;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    smallzero(num1,num2) = 0;
    cout<<"Num1 = "<<num1<<endl<<"Num2 = "<<num2;
}