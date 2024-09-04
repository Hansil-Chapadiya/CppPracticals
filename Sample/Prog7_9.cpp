#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[10];
    int age;
    public:
        Person(char *s, int a)
        {
            strcpy(name, s);
            age = a;
        }
        Person& Older(Person &obj)
        {
            if(obj.age > age)
                return obj;
            else 
                return *this;
        }
        void show()
        {
            cout<<"Name: "<<name<<" Age: "<<age<<endl;
        }
};
int main()
{
    Person P1("Roshan",51);
    Person P2("Ritesh",42);
    Person P = P1.Older(P2);
    cout<<"Elder person is:"<<endl;
    P.show();
}