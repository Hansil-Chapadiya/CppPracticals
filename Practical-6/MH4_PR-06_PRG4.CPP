#include<iostream>
using namespace std;
class Player
{
    protected :
       int Player_no;
    public :
        void getno()
        {
            cout<<"Enter Player No. : ";
            cin>>Player_no;
        }
};
class Inings : public Player
{
   protected :
       float i1,i2;
   public :
       void getRun()
       {
           cout<<"Enter Run of ing 1 &  2 : ";
           cin>>i1>>i2;
       }
       void putRun()
       {
           cout<<"Marks 1 = "<<i1<<endl;
           cout<<"Marks 2 = "<<i2<<endl;
       }

};
class result : public Inings
{
    float total;
    public :
        void show()
        {
            total = i1 + i2;
            cout<<"-------------------------------"<<endl;
            cout<<"Player_No. : "<<Player_no<<endl;
            cout<<"Total Runs = "<<total<<endl;
            cout<<"-------------------------------"<<endl;
        }
};
int main()
{
    cout<<"-------------------------------"<<endl;
    cout<<"This is Multi-level Inheritance."<<endl;
    cout<<"-------------------------------"<<endl;
    result R1;
    R1.getno();
    R1.getRun();
    R1.show();
}

