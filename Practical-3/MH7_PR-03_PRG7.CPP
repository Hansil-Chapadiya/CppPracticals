#include<iostream>
using namespace std;
class Bank
{
private:
    char name[10];
    int acc_no,type;
    float bal=1000.00;
public:
    void InitValue(){
        int b;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Account_No:(At least 4 digit) ";
        cin>>acc_no;
        while(acc_no<1000 && acc_no>9999)
        {
            cout<<"Enter Valid Account_No: ";
            cin>>acc_no;
        }
        
        cout<<"Enter Account_Type:1.Current 2.Saving ";
        cin>>type;
        cout<<"Enter Balance: ";
        cin>>b;
        bal += b;
    }
    int checked(int acno){
        if (acc_no==acno)
            return 1;
        else return 0;
    }
    void Deposit(){
        int b;
        cout<<"Enter Amount: ";
        cin>>b;
        while (b<0){
            cout<<"Enter valid Amount: ";
            cin>>b;
        }
        bal += b;
        cout<<b<<" is Deposited"<<endl;
        cout<<"Final Balance="<<bal<<"INR"<<endl;
    } 
    void Withdraw(){
        int b,b1;
        cout<<"Enter Amount: ";
        cin>>b;
        b1 = bal - b;
        while (b1<1000)
        {
            cout<<"Enter valid Amount: ";
            cin>>b;
            b1 = bal - b;
        }
        bal -= b;
        cout<<b<<" is withrawed"<<endl;
        cout<<"Final Balance="<<bal<<"INR"<<endl;
    }
};
int main()
{
    Bank b[4];
    for (int i = 0; i <= 3; i++)
    {
        b[i].InitValue();
    }
    int acno,flag=0;
    cout<<endl<<"Enter Account Number to Check:";
    cin>>acno;
        for (int i = 0; i <= 3; i++)
        {
            if(b[i].checked(acno))
            {
                flag=1;
                cout<<"1.Deposit: ";
                cout<<"2.Withdraw: ";
                int ch;
                cout<<"Enter Choice: ";
                cin>>ch;
                switch (ch)
                {
                case 1:
                    b[i].Deposit();
                    break;
                case 2:
                    b[i].Withdraw();
                    break;
                default:
                    cout<<"Invalid Choice:";
                    break;
                }
            }
        }    
        if(flag==0)
        {
            cout<<"Account No does not exist.";
            cout<<endl<<"Enter Account Number to Check:";
            cin>>acno;
        }
}