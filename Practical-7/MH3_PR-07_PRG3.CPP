#include<iostream>
#define PI 3.14
using namespace std;
double AREA(int rad){
    return PI*rad*rad;
}
int AREA(int l,int b){
    return l*b;
}
double AREA(double alt, double base){
    return ((0.5)*(alt*base));
}
double AREA(int rad,double height){
    return (2*PI*rad*height);
}
int main(){
    cout<<"Area of Circle: "<<endl;
    cout<<AREA(4)<<endl;
    cout<<"Area of Rectangle: "<<endl;
    cout<<AREA(12,15)<<endl;
    cout<<"Area of Triangle: "<<endl;
    cout<<AREA(6.00,5.00)<<endl;
    cout<<"Area of Cylinder: "<<endl;
    cout<<AREA(2,6.0);
}