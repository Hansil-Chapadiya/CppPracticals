#include<iostream>
using namespace std;
class student
{
  protected:
    int rollno;
  public:
    void get_no(int r)
    {
      rollno = r;
    }
         void put_no()
    {
      cout<<"Roll No:"<< rollno <<endl;
    }
};
class test: virtual public student
{
  protected:
    float p1, p2;
  public:
    void get_mark(float m1,float m2)
    {
      p1 = m1; p2 = m2;
    }
         void put_mark()
    {
      cout<<"Marks obtained:"<<endl;
      cout<<"Test-1:" << p1 <<endl;
      cout<<"Test-2:" << p2 <<endl;
    }
};
class sports: virtual public student
{
  protected:
    float score;
  public:
    void get_score(float s)
    {
      score = s;
    }
    void put_score()
    {
      cout<<"Sports Score:"<<score<<endl;
    }
};
class result: public test, public sports
{
     float total;
  public:
   void display()
   {
     total = p1 + p2 + score;
     put_no();
     put_mark();
     put_score();
     cout<<"Total score:"<< total <<endl;
    }
};
int main()
{
   result S1;
   S1.get_no(10);
   S1.get_mark(30.0,25.5);
   S1.get_score(12.0);
   S1.display();
   return 0;
}