#include<iostream>
using namespace std;
class office;
class house{
    float length;
    float width;
    float area;
    public:
    void get(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter Width: ";
        cin>>width;
        area = length * width;
        cout<<"Area = "<<area<<endl;
    }
    friend void comp(house, office);
};
class office{
    float length;
    float width;
    float a;
    public:
    void get(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter Width: ";
        cin>>width;
        a= length * width;
        cout<<"Area = "<<a<<endl;
    }
    friend void comp(house, office);
};
void comp (house h, office o){
    float diff;
    if(h.area>o.a){
        diff=h.area-o.a;
        cout<<"House Area is Larger: "<<endl;
        cout<<"Difference : "<<diff<<endl;
    }
    else{
        diff=o.a-h.area;
        cout<<"Office Area is Larger: "<<endl;
        cout<<"Difference : "<<diff<<endl;
    }
}
int main()
{
    house H1;
    office O1;
    H1.get();
    O1.get();
    comp (H1,O1);
    return 0;
}