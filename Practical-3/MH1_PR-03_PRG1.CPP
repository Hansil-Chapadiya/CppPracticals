#include<iostream>
using namespace std;
struct student
{
    int rollno;
    char name[10];
    int mark[3];
    int total;
};
int main(){
    student s1[4];
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter details for student: "<<i+1<<endl;
        cout<<"Enter Roll_No: ";
        cin>>s1[i].rollno;
        cout<<"Enter Name: ";
        cin>>s1[i].name;
        cout<<"Enter Marks:"<<endl;
        s1[i].total = 0;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter Marks "<<j+1<<":";
            cin>>s1[i].mark[j];
            s1[i].total = s1[i].total + s1[i].mark[j];
        }
    }
    cout<<"Students_details: "<<endl;
    cout<<"|Roll_No|\t|Name|\t|mark: 1|\t|mark: 2|\t|mark: 3|\t|Total|"<<endl;
    for (int i = 0; i < 4; i++)
    {
       cout<<s1[i].rollno<<"\t"<<s1[i].name<<"\t";
       for (int j = 0; j < 3; j++)
       {
           cout<<s1[i].mark[j]<<"\t";
       }
       cout<<s1[i].total<<endl; 
    }   
}
