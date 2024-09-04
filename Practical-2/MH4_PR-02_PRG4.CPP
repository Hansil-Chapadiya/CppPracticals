#include<iostream>
using namespace std;
int SeriesOfAdd(int n){
    if(n==1)
        return n;
    else
        return (n + SeriesOfAdd(n-1));
}
int main(){
    int n;
    cout<<"Enter Limit: ";
    cin>>n;
    cout<<"Ans = "<<SeriesOfAdd(n);
}