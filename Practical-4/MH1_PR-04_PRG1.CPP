#include<iostream>
using namespace std;
class Static_Mem
{
private:
    static int st;
public:
    void get(){
        cout<<"Enter Value: ";
        cin>>st;
    }
    void show(){
        cout<<"Static Value: "<<st;
    }
};
int Static_Mem :: st;
int main(){
    Static_Mem s1,s2;
    s1.get();
    s2.get();
    s2.show();
    cout<<endl;
    s2.show();
}
