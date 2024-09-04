/*This is VIGENERE CIPHER */
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Vigenere{
    public:
    void viginereCipher(){
        unsigned char p[25],key[11],c[25],p1[25];
        int i,j,k,klen,t1,t2;
        cout<<"-----------------------Vigenere Cipher--------------------"<<endl;
        cout<<"Enter plaintext::";
        cin>>p;
        cout<<"Enter key::";
        cin>>key;
        /* String length of KEY*/
        for(klen=0;key[klen]!='\0';klen++);
            for(i=0,j=0;p[i]!='\0';i++,j++)
            {
                if(j>=klen)
                    j=0;      //repeat key for next block
                t1=(int)p[i]-97;
                t2=(int)key[j]-97;
                c[i]=(char)(((t1+t2)%26)+97);
            }
        c[i]='\0';
        cout<<"\n|Ciphertext:"<<c <<"|"<<endl;
        cout<<"|Decryption of message is::";
        for(k=0,j=0;c[k]!='\0';k++,j++)
        {
           if(j>=klen)
              j=0;
           t1=(int)c[k]-97;
           t2=(int)key[j]-97;
           if((t1-t2)<0)
              p1[k]=(char)(((t1-t2)%26)+122+1);
           else
              p1[k]=(char)(((t1-t2)%26)+97);
        }
        p1[k]='\0';
        cout<<p1<<"|";
    }
};
int main()
{
   Vigenere v1;
   v1.viginereCipher();
   return 0;
}
