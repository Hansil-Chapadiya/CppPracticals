#include<iostream>
using namespace std;
class Number
{
    private:
        int n_int;
        int n_frac;
    public:
       void getData(){
           cout<<"Enter Integer: ";
           cin>>n_int;
           cout<<"Enter  Fraction:";
           cin>>n_frac;
       }
       void Add(Number n1, Number n2){
           n_int = n1.n_int + n2.n_int;
           n_frac = n1.n_frac + n2.n_frac;
           if (n_frac>=100)
           {
               n_int += n_frac/100;
               n_frac %= 100;  
           }
       }
       Number Add1(Number n2){
           Number n3;
           n3.n_int =  n_int + n2.n_int;
           n3.n_frac = n_frac + n2.n_frac;
           if (n3.n_frac>=100)
           {
               n3.n_int += n3.n_frac/100;
               n3.n_frac %= 100;  
           }
           return n3;
       } 
       void Show(){
           if (n_frac == 0)
           {
               cout<<"undefined"<<endl;
           } 
           cout<<"Number  = "<<n_int<<"/"<<n_frac<<endl;
       }
};
int main(){
    Number n1,n2,n3;
    n1.getData();
    n2.getData();
    n3.Add(n1,n2);
    n3 = n1.Add1(n2);
    n3.Show();
}