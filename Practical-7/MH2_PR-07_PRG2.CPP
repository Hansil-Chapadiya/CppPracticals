#include<iostream>
using namespace std;
int SUM(int n1,int n2){
    return n1+n2;
}
int SUM(int n1,int n2,int n3){
    return n1+n2+n3;
}
int SUM(int n1,int n2,int n3,int n4){
    return n1+n2+n3+n4;
}
int main(){
    cout<<"Additon of Two Integers: "<<endl;
    cout<<SUM(10,14)<<endl;
    cout<<"Addition of Three Integers: "<<endl;
    cout<<SUM(10,14,24)<<endl;
    cout<<"Addition of Four Integers: "<<endl;
    cout<<SUM(10,14,5,8)<<endl;
}