#include<iostream>
using namespace std;
class Player
{
private:
    char name[10];
    int age;
public:
    void GetData();
    void ShowData();
};

void Player:: GetData()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
}

void Player::ShowData()
{
    cout<<name<<"\t"<<age<<endl;
}

int main(){
    Player p[3];
    for (int i = 0; i < 3; i++)
    {
        p[i].GetData();
    }
    cout<<"|Name|\t|Age|"<<endl;
    for (int i = 0; i < 3; i++)
    {
        p[i].ShowData();
    }
    
    
}
