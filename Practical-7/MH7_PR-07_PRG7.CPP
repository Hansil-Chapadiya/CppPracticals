#include<iostream>
using namespace std;
class Calc
{
private:
    int n1;
public:
    void input(){
        cout<<"Enter Number: ";
        cin>>n1;
    }
    Calc operator +(Calc &C2){
        Calc ans;
        ans.n1 = n1 + C2.n1;
        return ans;
    }
    void show(){
        cout<<n1<<endl;
    }

    
};
int main(){
    Calc c1,c2;
    c1.input();
    c2.input();
    Calc ans;
    ans = c1 + c2;
    ans.show();
}
