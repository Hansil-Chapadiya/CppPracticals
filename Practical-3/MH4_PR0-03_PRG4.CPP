#include<iostream>
using namespace std;
class student
{
    private:
        int roll_no;
        char name[10];
        int mark[3];
        int total;
    public:
        void getDetails(){
            cout<<endl<<"Enter Roll_No: ";
            cin>>roll_no;
            cout<<"Enter Name: ";
            cin>>name;
            total = 0;
            for (int i = 0; i < 3; i++)
            {
                cout<<"Enter Marks: ";
                cin>>mark[i];
                total = total + mark[i];
            }
        }
        void showDetails(){
            cout<<roll_no<<"\t"<<name<<"\t";
            for (int i = 0; i < 3; i++)
            {
                cout<<mark[i]<<"\t";
            }
            cout<<total<<endl;    
        }
};
int main(){
    student s[4];
    for (int i = 0; i < 4; i++)
    {
        cout<<"Student: "<<i+1;
        s[i].getDetails();
    }
    
    cout<<"|Roll_No:|\t|Name|\t|Physics|\t|Maths|\t|Computer|\t|Total|"<<endl;
    for (int i = 0; i < 4; i++)
    {
        s[i].showDetails();
    }
    
}
