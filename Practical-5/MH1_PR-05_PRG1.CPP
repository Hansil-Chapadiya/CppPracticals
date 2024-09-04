#include<iostream>
using namespace std;
class Number
{
private:
    int num;
public:
    Number(): num (0) {};
    Number(int i) {num=i , cout<<"Constructor is called:"<<endl;};
    ~Number() {cout<<"Destructor is called";}
    void show(){cout<<num;}
};
int main(){
    Number n1(1);
    n1.show();
}