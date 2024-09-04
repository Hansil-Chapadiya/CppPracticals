#include<iostream>
using namespace std;
class Student
{
protected:
    int roll_no;
public:
    Student():roll_no(3){}
    void show(){cout<<"Roll_no = "<<roll_no<<endl;}
    ~Student();
};
class Sports : virtual public Student
{
protected:
    int score;
public:
    Sports(int s):score(s){}
    void show(){cout<<"Score = "<<score<<endl;}
    ~Sports();
};
class Test : virtual public Student
{
protected:
    int mark;
public:
    Test(int m):mark(m){}
    void show(){cout<<"Merks = "<<mark<<endl;}
    ~Test();
};
class Result : public Sports, public Test
{
private:
    /* data */
public:
    Result(int s,int m):Sports(s),Test(m){int R = s+m; cout<<"RESULT = "<<R;};
    ~Result();
};
int main(){
    Result R1(12,13);
}

