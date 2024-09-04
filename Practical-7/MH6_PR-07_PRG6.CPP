#include<iostream>
using namespace std;
class Number
{
    private:
        int feet;
        int inch;
    public:
       void getData(){
           cout<<"Enter FEET: ";
           cin>>feet;
           cout<<"Enter INCH:";
           cin>>inch;
       }
       Number operator ++(){
           Number temp;
           temp.feet = feet;
           temp.inch = ++inch;
           if (inch>=12)
           {
               feet += inch/12;
               inch %= 12; 
               temp.feet = feet;
               temp.inch = inch;
           } 
           return temp;
       }
       Number operator ++(int){
           Number temp;
           temp.inch = inch++;
           temp.feet = feet;
           if (inch>=12)
           {
               feet += inch/12;
               inch %= 12; 
           }
           return temp;
       }
        Number operator+ (Number n2){
           Number n3;
           n3.feet =  feet + n2.feet;
           n3.inch = inch + n2.inch;
           if (n3.inch>60)
           {
               n3.feet += n3.inch/12;
               n3.inch %= 12;  
           }
           return n3;
       }  
       void Show(){
           cout<<"FEET  = "<<feet<<endl<<"INCH = "<<inch<<endl;
       }
};
int main(){
    Number n1,n2,n3,n4;
    n1.getData();
    n3 = ++n1;
    cout<<"Pre Increment: "<<endl;
    cout<<"For N3 Object By return: "<<endl;
    n3.Show();
    cout<<"For N1 Object By return: "<<endl;
    n1.Show();
    ++n1;
    cout<<"For N1 object By not return: "<<endl;
    n1.Show();

    n2.getData();
    cout<<"Post Increment: "<<endl;
    n4 = n2++;
    cout<<"For N4 Object By return: "<<endl;
    n4.Show();
    cout<<"For N2 Object By return: "<<endl;
    n2.Show();
    n2++;
    cout<<"For N1 object By not return: "<<endl;
    n2.Show();

    Number n5;
    n5 = n1+n2;

    cout<<"Addition = ";
    n5.Show();
}