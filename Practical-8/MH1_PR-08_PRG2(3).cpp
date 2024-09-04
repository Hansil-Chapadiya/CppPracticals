#include<iostream>
using namespace std;
int main()
{
cout.fill('*');
cout<<"SETF()"<<endl;
cout.setf(ios::internal, ios::adjustfield);
cout.setf(ios::scientific, ios::floatfield);
cout.width(15);
float d=-123.345678;
cout<<d<<"\n";
cout<<"Set to left:\n";
cout.setf(ios::left,ios::adjustfield);
cout.width(10);
cout<<1234567L<<"\n"<<endl;


cout<<"UNSETF()"<<endl;
cout.unsetf(ios::internal);
cout.unsetf(ios::scientific);
cout.unsetf(ios::left); //one argument
cout<<"Reset to Default right:\n";
cout.width(10);
cout<<1234567L<<"\n";
cout<<d<<"\n";
}