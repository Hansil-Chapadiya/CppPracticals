#include<iostream>
using namespace std;
class Dist{
    private:
        int inch;
        int feet;
    public:
        void InputValue(){
            cout<<"Enter Feet: ";
            cin>>feet;
            cout<<"Enter Inch: ";
            cin>>inch;
        }
        void AddShow(Dist DD2){
            feet = feet + DD2.feet;
            inch = inch + DD2.inch;
            if (inch >= 12)
            {
                feet += inch / 12;
                inch = inch % 12;
            }
            cout<<"Feet = "<<feet<<"'- "<<inch<<"\""<<endl;
        }
};
int main(){
    Dist d1,d2;
    d1.InputValue();
    d2.InputValue();
    d1.AddShow(d2);
}