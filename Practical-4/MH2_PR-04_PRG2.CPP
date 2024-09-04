#include<iostream>
using namespace std;
class Test
{
private:
    int code;
    static int cnt;
public:
    void SetCode();
    void ShowCode();
    static void ShowCnt();
};
int Test :: cnt;
void Test::SetCode()
{
    code = ++cnt;
}

void Test::ShowCode()
{
    cout<<"Code = "<<code<<endl;
}

void Test :: ShowCnt(){
    cout<<"Count = "<<cnt<<endl;
}

int main(){
    Test t1,t2;
    t1.SetCode();
    t2.SetCode();
    t1.ShowCode();
    t2.ShowCode();

    Test t3;
    Test::ShowCnt();
}
