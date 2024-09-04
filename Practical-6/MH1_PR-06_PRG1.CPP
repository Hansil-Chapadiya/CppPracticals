#include<iostream>
using namespace std;
class Company{
    protected:
        char com_name[15];
    public:
        void input(){
            cout<<"Enter Company Name: ";
            cin>>com_name;
        }   
        void show(){
            cout<<"Company Name = "<<com_name<<endl;
        }

};

class Employee : public Company{
    private:
        int emp_id;
        char name[15];
    public:
        void input(){
            Company::input();
            cout<<"Enter Employee ID: ";
            cin>>emp_id;
            cout<<"Enter Name: ";
            cin>>name;
        }
        void show(){
            Company::show();
            cout<<"Employee ID = "<<emp_id<<endl;
            cout<<"Employee Namespace = "<<name<<endl;
        }

};
int main(){
    Employee E[2];
    for(int i=0;i<2;i++)
        E[i].input();
    for(int i=0;i<2;i++)
        E[i].show();
}