#include<iostream>
using namespace std;
class Time
{
private:
    int min;
    int sec;
public:
    void getTime();
    void showTime();
    int operator ==(Time &t2){
        if (sec>=60)
        {
            min += sec/60;
            sec %= 60;
        }
        if (t2.sec>=60)
        {
            t2.min += t2.sec/60;
            t2.sec %= 60;
        }
        if (sec == t2.sec)
        {
            if (min == t2.min)
            {
                return 1;
            }
            
        }
        else
            return 0;  
    }
};

void Time::getTime(/* args */)
{
    cout<<"Enter Minutes: ";
    cin>>min;
    cout<<"Enter Second: ";
    cin>>sec;
}

void Time::showTime()
{
    cout<<min<<":"<<sec<<endl;
}

int main(){
    Time t1,t2;
    t1.getTime();
    t2.getTime();
    if (t1==t2)
    {
        cout<<"Both Times are Same: "<<endl;
    }
    else
    {
        cout<<"Times are Different: "<<endl;
    } 
}



