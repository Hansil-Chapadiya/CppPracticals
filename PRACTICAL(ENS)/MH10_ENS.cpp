#include<iostream>
using namespace std; /*Hill Cipher 2x2 and 3x3 inputs*/
class HillCipher{
    private:
        char ct[10];         
        int key[3][3]={{5,7,10},{13,17,7},{0,5,4}};  //key for 9 characters 3x3
        int inv_key[3][3]={{21,14,1},{0,8,25},{13,3,8}};
        int ptp[3][3];
        int ctp[3][3];
    public:
        char pt[10];
        void prn_pt()
        {
            int i,j,k=0;
            //1D plaintext copied into 2D array
            cout<<"Entered Plaintext"<<endl;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    ptp[i][j] = pt[k]-'A';  k++;
                    cout<<(char)(ptp[i][j] + 'A')<<" | ";
                }
                cout<<"\n";
            }
        }
        void hill()
        {
            int i,j,k,m,n,p;
            //3x3 Matrix multiplication
            for(m=0;m<3;m++)
            {
                for(p=0;p<3;p++)
                {
                    ctp[m][p]=0;
                    for(n=0;n<3;n++)
                        ctp[m][p]+=ptp[m][n]*key[n][p];
                }
            }
            cout<<"\n";
            cout<<"Ciphertext In Matrix Form"<<endl;
            k=0;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    ctp[i][j]=ctp[i][j]%26;
                    cout<<ctp[i][j]<<" | ";
                    ct[k]=ctp[i][j]+'A';
                    k++;
                }
                cout<<"\n";
            }
            ct[9]='\0';
            cout<<"\nCipher Text:"<<ct<<endl;
            cout<<"------------------------\nDecryption\n";
        }
        void dec_hill()
        {
            int i,j,k,m,n,p;
            int dec_t[3][3];
            char dec[10];
            for(m=0;m<3;m++)
            {
                for(p=0;p<3;p++)
                {
                    dec_t[m][p]=0;
                    for(n=0;n<3;n++)
                        dec_t[m][p]+=ctp[m][n]*inv_key[n][p];
                }
            }
            cout<<"\n";

            k=0;
            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    dec_t[i][j]=dec_t[i][j]%26;
                    cout<<dec_t[i][j]<<" | ";
                    dec[k]=dec_t[i][j]+'A';
                    k++;
                }
                cout<<"\n";
            }
            dec[9]='\0';
            cout<<"\nDecrypted Text is="<<dec;
        }
};
int main()
{
    HillCipher H1;
    cout<<"-------------------------Hill Cipher----------------------"<<endl;
    cout<<"Enter Plaintext (9 characters UPPER case):";
    cin>>H1.pt;
    H1.prn_pt();
    H1.hill();
    H1.dec_hill();
}
