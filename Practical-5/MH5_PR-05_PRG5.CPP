#include<iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;
public:
    Time() : hr(0),min(0),sec(0) {cout<<"Default Constructor is called:"<<endl;};
    Time(int hh, int mm, int ss ): hr(hh=11),min(mm=59),sec(ss=59) {cout<<"Parameterized constructor is called: "<<endl;};
    Time(Time  &tt): hr(tt.hr), min(tt.min), sec(tt.sec) {cout<<"Copy Constructor is called"<<endl;};
    ~Time() {cout<<"Destructor is called"<<endl;};
    void getData();
    void putData();
};
void Time::getData(){
    cout<<"Enter Hour: ";
    cin>>hr;
    cout<<"Enter Minute: ";
    cin>>min;
    cout<<"Enter Second: ";
    cin>>sec;
}
void Time::putData(){
    cout<<hr<<":"<<min<<":"<<sec<<endl;
}
int main(){
    Time T1;
    Time T2(11,59,59);
    Time T3(T2);
    T1.getData();
    T1.putData();
    T2.putData();
    T3.putData();
}


