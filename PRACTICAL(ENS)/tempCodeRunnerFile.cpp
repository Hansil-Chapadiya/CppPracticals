#include<iostream>
using namespace std;
class MH12_ENS
{
private:
    char pt[26];
    char m[5][5];
    char ct[26];
    char m1[5][5];
    char dt[26];
public:
    void getPlainText()
    {
        cout<<"Enter Plain Text: ";
        cin>>pt;
    }
    void MatrixAssign()
    {
        int k=0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                m[i][j] = 'z';
                m1[i][j] = 'z';
            }   
        }
        
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (pt[k] != '\0')
                {
                    m[i][j] = pt[k];
                    k++;
                } 
                else
                    break;     
            }
        }
    }
    void encryption()
    {
        int k=0;
        cout<<"\nEncryption: "<<endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                ct[k] = m[j][i];
                k++;
            }
            
        }
        ct[25] = '\0';
        cout<<"Encrypted String = "<<ct<<endl<<endl;
        
    }
    void decryption(){
        int k=0;
        cout<<"Decryption: "<<endl;
        for (int i = 0; i < 5; i++)
        {
           for (int j = 0; j < 5; j++)
           {
               m1[j][i] = ct[k];
               k++;
           }
        } 
        k=0;
        for (int i = 0; i < 5; i++)
        {
           for (int j = 0; j < 5; j++)
           {
               if (m1[i][j] != 'z')
               {
                    dt[k] = m1[i][j]; 
                    k++;
               } 
               else
                    break;     
           }
        } 
        dt[k] = '\0';
        cout<<"Decrypted String = "<<dt<<endl;
    }
    void print(){
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                    cout<<"|"<<m[i][j]<<"|";
                
            }   
            cout<<endl;
        }
    }
    void print1(){
        for (int i = 0; ct[i] != '\0'; i++)
        {
            if(i % 6 == 0){
                cout<<endl;
            }
            cout<<"|"<<ct[i]<<"|";
        }
        
    }
};
int main(int argc, char const *argv[])
{
    MH12_ENS M1;
    cout<<"------------------Rectangular Cipher-------------"<<endl<<endl;
    M1.getPlainText();
    M1.MatrixAssign();
    M1.print();
    M1.encryption();
    M1.print1();
    M1.decryption();
    return 0;
}

