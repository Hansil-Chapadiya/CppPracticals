#include<iostream>
using namespace std;
class dist
{
private:
    int inch;
    int feet;
public:
    void getdata(){
        cout<<"Enter Feet: ";
        cin>>feet;
        cout<<"Enter Inch: ";
        cin>>inch;
    }
    void showdata(){
        if (inch>=12)
        {
            feet += inch/12;
            inch %= 12;
        }
        
        cout<<"Feet = "<<feet<<endl;
        cout<<"Inch = "<<inch<<endl;
    }
};
int main(){
    dist d1,d2;
    d1.getdata();
    d1.showdata();
}
