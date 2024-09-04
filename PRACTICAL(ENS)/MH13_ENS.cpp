/*Program for Keyed Columnar Transposition cipher*/
#include<iostream>
#include<string.h>
using namespace std;
class Columner{
    private:
        char z[5][5], ans[5][5];
        char pt[26], ptp[5][5];
        int key[5];
        int dec_key[5];
    public:
        char p[26];
        void prn(char s[5][5])
        {
        int i,j;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            cout<<s[i][j];
            cout<<"\n";
        }
        }
        void key_inverse()
        {
            int i=0;
            while(i<5)
            {
                dec_key[key[i]-1]=i;
                i++;
            }
        }
        void decryption(int len)
        {
        int i,j,k,col;
        key_inverse();
        cout<<"\n-----------------------------\n";
        cout<<"Decryption::\n";
        for(i=0;i<5;i++)
        {
            col=dec_key[i];
            for(j=0;j<5;j++)
            {
                ptp[j][i]=ans[j][col];
            }
        }
        cout<<"\nStep-1::\nMatrix is:\n";
        prn(ptp);
        cout<<"\nStep-2:\n";
        k=0;
        for(i=0; i<5; i++)
            for(j=0; j<5; j++)
            {
                pt[k]=ptp[i][j];
                k++;
            }
            pt[len]='\0';
            cout<<"\nFinal Decrypted Text = "<<pt<<endl<<endl;
        }

        void columnar()
        {
        int i,j,k,len,col;
        cout<<"\nText in column after Keyless transpsition:\n";
        //to store oneD array into 2D string
        //Step-1: Keyless transposition
        for(i=0;i<5;i++)
            for(j=0;j<5;j++)
                z[i][j]='z'; //initialize with z

        len=strlen(p);
        k=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5  && k<len;j++,k++)
            {
                z[i][j]=p[k];
            }
        }
        prn(z);
        //Step-2 Keyed Transposition
        cout<<"\n------------------------------";
        cout<<"\nKEY FOR KEYED TRANSPOSTION:\n";
        cout<<"Enter the key(one by one no):\n";
        for(i=0;i<5;i++)
        {
            cout<<"Enter Key no- "<< i+1 <<" : ";
            cin>>key[i];
        }
        for(i=0;i<5;i++)
        {
            col=key[i]-1;
            for(j=0;j<5;j++)
            {
                ans[j][i]=z[j][col];
            }
        }
        cout<<"Answer matrix is:\n";
        prn(ans);

        cout<<"\nFINAL ENCRYPTED TEXT::\n";
        for(i=0;i<5;i++)
            for(j=0;j<5;j++)
                cout<<ans[j][i];
        //Call Decryption function
        decryption(len);
        }
};
int main()
{
   Columner c1;
   cout<<"-----------------Columnar Cipher---------------"<<endl;
   cout<<"Enter plain text:";
   cin>>c1.p;
   c1.columnar();
}
