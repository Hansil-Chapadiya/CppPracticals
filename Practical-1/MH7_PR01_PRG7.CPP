#include<iostream>
using namespace std;
int main(){
    int F=0,S=1,TH,num;
    cout<<"Enter limit: ";
    cin>>num;
    cout<<F<<" "<<S<<" ";
    for(int i=0;TH<num;i++){
        TH = F+S;
        cout<<TH<<" ";
        F = S;
        S = TH;
    }
}