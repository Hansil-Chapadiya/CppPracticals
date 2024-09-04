#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout<<setfill('#');
cout<<"Default right:\n";
cout<<setw(15);
cout<<"GREAT_BRITAIN"<<"\n";

cout<<"Set to left:\n";
cout<<setiosflags(ios::left);
cout<<setw(15);
cout<<"GREATE_KIWIS"<<"\n";

cout<<resetiosflags(ios::left);
cout<<"Reset to Default right:\n";
cout<<setw(15);
cout<<"BUTBEST_INDIA"<<"\n"; 
}