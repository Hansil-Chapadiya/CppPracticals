#include<iostream>
using namespace std;
class time
{
private:
    int hour;
    int minute;
public:
    void getTime();
    void showTime();
};
void time :: getTime(){
    cout<<endl<<"Enter Hour: ";
    cin>>hour;
    cout<<"Enter minute: ";
    cin>>minute;
}
void time :: showTime(){
    //cout<<"Time:"<<endl;
    cout<<hour<<":"<<minute<<"\t";
}
int main(){
    time t[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Hour: "<<i+1;
        t[i].getTime();
    }
    cout<<"|Time: 1|\t|Time: 2|\t|Time: 2"<<endl;
    for (int i = 0; i < 3; i++)
    {
        t[i].showTime();
    }   
}