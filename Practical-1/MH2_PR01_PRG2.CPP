#include<iostream>
using namespace std;
int main()
{
    int i = 65;
    float f = 12.88f;
    double d = 90.273;
    char ch = 'C';
    cout<<"Original Values:";
    cout<<endl<<"int i="<<i;
    cout<<endl<<"float f="<<f;
    cout<<endl<<"double d="<<d;
    cout<<endl<<"char ch="<<ch;
    cout<<endl<<"After Type casting";
    cout<<endl<<"int in char format    :"<<(char)i;
    cout<<endl<<"float in int format   :"<<(int)f;
    cout<<endl<<"double in char format :"<<(char)d;
    cout<<endl<<"char in int format    :"<<(int)ch;
}
