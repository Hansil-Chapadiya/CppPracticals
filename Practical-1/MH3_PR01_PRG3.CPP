#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter Amount: "<<endl;
    float amount;
    cin>>amount;
    int Rs,Ps;
    Rs = int(amount);
    Ps = roundf(((float(amount - Rs))*100.0));
    cout<<"Rupee: "<<Rs<<endl;
    cout<<"Paisa: "<<Ps<<endl;
}