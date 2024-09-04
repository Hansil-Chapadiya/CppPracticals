#include<iostream>
using namespace std;
class Employee
{
private:
    char name[10];
    int age;
    float salary;
public:
    void Input();
    void Display();
};

void Employee::Input(/* args */)
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Salary: ";
    cin>>salary;
}

void Employee::Display()
{
    cout<<name<<"\t"<<age<<"\t"<<salary<<endl;
}

int main(){
    Employee E[3];
    for (int  i = 0; i < 3; i++)
    {
        E[i].Input();
    }
    cout<<"|Name:|\t|Age|\t|Salary|"<<endl;
    for (int i = 0; i < 3; i++)
    {
        E[i].Display();
    }
    
    
}