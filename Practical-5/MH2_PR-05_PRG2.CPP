#include<iostream>
using namespace std;
class Number
{
private:
    int num;
public:
    Number(): num (0) {cout<<"Default Constructer is called:"<<endl;};
    Number(Number & nn): num(nn.num) {cout<<"Copy Constructor is called:"<<endl;};
    ~Number() {cout<<"Destructor is called"<<endl;}
    void getValue(){
        cout<<"Enter Number: ";
        cin>>num;
    }
    void add(Number NN2){
        num = num + NN2.num;
        cout<<"Number = "<<num<<endl;    
    }
};
int main(){
    Number N1;
    N1.getValue();
    Number N2(N1);
    N1.add(N2);

}