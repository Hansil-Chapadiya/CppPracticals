#include<iostream>
using namespace std;
int key;
char pt[20];
char ct[20];
char dt[20];
void encryption()
{
    int i;
    for(i=0; pt[i] != '\0'; i++)
    {
        ct[i] = ((pt[i] + 'A' + key)%26) + 'A';
    }
    ct[i] = '\0';
}
void decryption(int k)
{
    int i;
    for(i=0; ct[i] != '\0'; i++)
    {
        dt[i] = ((ct[i] + 'A' + k)%26) + 'A';
    }
    dt[i]='\0';
}
void bruteforce()
{
    cout<<"\nAttack on "<<ct<<endl;
    int k;
    for(k=1;k<26;k++)
    {
        decryption(k);
        cout<<"\nDecrypt ciphertext with Key "<<k<<":"<<dt;
    }
}
int main()
{
    cout<<"Enter Plaintext: ";
    cin>>pt;
    cout<<"Enter key :";
    cin>>key;
    encryption();
    decryption(26-key);
    cout<<"\nEncrypted text :"<<ct<<endl;
    cout<<"Decrypted text :"<<dt<<endl;
    bruteforce();
    return 0;
}