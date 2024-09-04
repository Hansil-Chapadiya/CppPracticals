#include<iostream>
using namespace std;
inline int square(int n){
    return n*n;
}
inline int cube(int n){
    return n*n*n;
}
int main(){
    int n;
    cout<<"Square & Cube: "<<endl;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Square = "<<square(n)<<endl;
    cout<<"Cube = "<<cube(n);
}