/*#include<iostream>
using namespace std;
class T
{
    protected :
       int t;
    public :
       void gett(int a)
       {
         t=a;
       }
};
class Y
{
    protected :
       int y;
    public :
       void gety(int b)
       {
         y=b;
       }
};
class Der : public T,Y
{
    public :
        void display()
        {
            cout<<"T = "<<t<<endl;
            cout<<"Y = "<<y<<endl;
            cout<<"T * Y = "<<t*y<<endl;
        }
};
int main()
{
    Der D;
    D.gett(4);
    D.display();
}*/
#include<iostream>
using namespace std;
class Student{
    protected :
        int roll_no;
    public :
        void getno(){cout<<"Enter Roll-no: "; cin>>roll_no;}
        void putno(){cout<<"Roll_No: "<<roll_no;}
};
class Test {
    protected :
        float m1,m2;
    public : 
        void getm(){cout<<"Enter Marks 1: "; cin>>m1; cout<<"Enter Marks 2: "<<endl; cin>>m2;}
        void putm(){cout<<"Maths: "<<m1<<endl; cout<<"Computer: "<<m2<<endl;}
};  
class Result : public Test, public Student{
    float total;
    public:
        void show(){Student::getno(); Test::getm(); total=((m1+m2)*100)/200; Student::putno(); Test::putm(); cout<<"Result="<<total<<endl;}
};
int main()
{
    Result R1;
    R1.Student::getno();
    R1.show();
}
