#include<iostream>
using namespace std;
class MonoAlpha
{
private:
    char ct[300];
    char pt[300];
    char key[28];
    char dt[300];
public:
    void getPlainText(){
        cout<<"Enter Plain Text: ";
        cin>>pt;
    }
    void PutPlainText(){
        cout<<"PlainText = "<<pt<<endl;
    }
    void getKey(){
        for (int i = 0; i < 26; i++)
        {
            cout<<"Substitute for "<<char(65+i)<<": ";
            cin>>key[i];
        }  
    }
    void showKey(){
        for (int i = 0; i < 26; i++)
        {
            cout<<char(65+i)<<"|";
            
        }  
        cout<<endl;
        for (int  i = 0; i < 26; i++)
        {
            cout<<key[i]<<"|";
        }      
    }
    void encryption(){
        int i;
        for (i = 0; pt[i] != '\0'; i++)
        {
            ct[i] = key[pt[i]-65];
        }
        ct[i] = '\0';
        cout<<"\nEncrypted String: "<<ct<<endl;
    }
    void decryption(){
        int i;
        for (i = 0; ct[i] != '\0'; i++)
        {
            //dt[i] = key[ct[i]+65];
            for (int j = 0; j < 26; j++)
            {
                char ch = 'A' + j;
                if (ct[i] == key[j])
                {
                    dt[i] = ch;
                }
                
            }    
        }
        dt[i]='\0';
        cout<<"Decrypted String: "<<dt<<endl;
    }
};
int main()
{
    MonoAlpha ML;
    cout<<"\n************************************* MonoAlphabetic Cipher ************************************"<<endl;
    ML.getPlainText();
    ML.PutPlainText();
    cout<<"\n************************************************************************************************"<<endl;
    cout<<"Get Substitute Of characters: "<<endl;
    ML.getKey(); 
    cout<<"Substitute of characters: "<<endl;
    ML.showKey();
    cout<<"************************************************************************************************"<<endl;
    cout<<"Encryption: "<<endl;
    ML.encryption();
    cout<<"Decryption: "<<endl;
    ML.decryption();
    cout<<"************************************************************************************************"<<endl;
    getchar();
}

//for(i=0;i<5;i++) cout("%d ",dec_key[i]+1);(13)