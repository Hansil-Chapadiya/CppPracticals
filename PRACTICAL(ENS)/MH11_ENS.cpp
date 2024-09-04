/*Program for One-Time Pad Implementation*/
#include<iostream>
using namespace std;
class OneTimePad{
    public:
        //void decrypt(unsigned char []);
        void encrypt(unsigned char pt[])
        {
            unsigned char ct[50],key;
            int i,len,tkey;
            FILE *fp;

            //Length of Plaintext
            for(len=0;pt[len]!='\0';len++);

            fp=fopen("KEY.txt","w");
            for(i=0;i<len;i++)
            {
                tkey=rand()%26;
                ct[i]=pt[i]+tkey;
                if(ct[i]>'Z')
                    ct[i]-=26;
                key=(unsigned char)(tkey+65);
                putc(key,fp);
            }
            ct[i]='\0';
            cout<<"\nCipher Text:"<<ct;
            fclose(fp);
            decrypt(ct);
        }
        void decrypt(unsigned char ct[])
        {
            unsigned char p[50],ch;
            char d;
            int i,len,tkey;
            FILE *fptr;
            for(len=0;ct[len]!='\0';len++);

            if((fptr=fopen("KEY.txt","r"))==NULL)
            {
                cout<<"No file for KEY is found";
                //getch();
                exit(0);
            }
            cout<<"\n\nThe key is::";
            //To print key from file
            while((d=getc(fptr))!=EOF)
            cout<<d;
            //After reading fptr moved to EOF
            //It is required to reset to starting of file.
            fseek(fptr,0L,0);
            for(i=0;i<len;i++)
            {
                ch=getc(fptr);
                tkey=(int)(ch-65);
                p[i]=ct[i]-tkey;
                if(p[i]<'A')
                    p[i]+=26;
            }
            p[i]='\0';
            cout<<"\n\nDecrypted text::"<<p<<endl;
            fclose(fptr);
        }
};      
int main()
{
    OneTimePad OT;
    cout<<"----------------OneTimePad----------------"<<endl;
	unsigned char pt[50];
	int i;
	cout<<"Enter Plaintext::";
	cin>>pt;
	OT.encrypt(pt);
}
