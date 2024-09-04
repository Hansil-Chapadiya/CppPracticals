#include<iostream>
using namespace std;
class Number
{
private:
    int n;
public:
    Number(): n(0) {cout<<"Default Constructor is called:"<<endl;};
    Number(int num): n(num) {cout<<"Parameterized Constructor is called:"<<endl;};
    Number(Number & nn) : n(nn.n){cout<<"Copy Constructor is called"<<endl;};  
    ~Number(){cout<<"Destructor is called"<<endl;};
    void Input(){
        cout<<"Enter Number: ";
        cin>>n;
    }
    void Output(){
        cout<<"Difference = "<<n<<endl;
    }
    Number diff(Number nn2){
        cout<<"Number 1 = "<<n<<endl;
        cout<<"Number 2 = "<<nn2.n<<endl;
        if (n > nn2.n)
        {
            Number temp;
            temp.n = n - nn2.n;
            return temp;
        }
        else
        {
            Number temp;
            temp.n = nn2.n - n;
            return temp;
        }
    }
};
int main(){
    Number n1(42),n2(n1);
    Number n3;
    n3 = n1.diff(n2);
    n3.Output();
}