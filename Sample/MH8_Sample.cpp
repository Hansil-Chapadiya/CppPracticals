/* THE PROGRAM IS TO ENCRYPT TO PLAINTEXT INTO CIPHER TEXT
USING PLAYFAIR ALGORITHM
The key is 5x5 matrix. For example,
m o n a r
c h y b d
e f g i k
l p q s t
u v w x z  */
#include<iostream>
#include<conio.h>
using namespace std;
void playfair_decrypt(char []);
char k[5][6]={"volta","sbcde","fghik","mnpqr","uwxyz"}; //key: voltas
class PlayFair{
    public:
    int ROW(char a)
    {
       int i,j;
       for(i=0;i<5;i++)
       {
          for(j=0;j<5;j++)
          {
    	    if(k[i][j]==a)
    	       return i;
          }
       }
    }
    int COL(char a)
    {
       int i,j;
       for(i=0;i<5;i++)
       {
          for(j=0;j<5;j++)
          {
    	    if(k[i][j]==a)
    	       return j;
          }
       }
    }
    void playfair(char pt[])
    {
       int i=0,j,R1,C1,R2,C2;
       char ct[20];
       for(j=0;pt[j]!='\0';j++)    //ENCRYPT UPTO END OF STRING
       {
          if(pt[j]=='j') pt[j]='i'; //i and j encrypted in as i.
          if(pt[j+1]=='j') pt[j+1]='i';
          //--------------------------------------------------------
          //AFTER PAIRING or input is single letter
          if(pt[j+1]=='\0')
          {
    	    //1. same row
    	     R1=ROW(pt[j]); C1=COL(pt[j]);
    	     R2=ROW('x');   C2=COL('x');  //row & col of 'x'
    	     if(R1==R2)
    	     {
    	       if(C1==4) C1=-1;     //if last letter
    	       ct[i]=k[R1][C1+1];
    	       i++;
    	       ct[i]=k[R1][C2+1];
    	     }
    	     //2. same column
    	     else if(C1==C2)
    	     {
    	        if(R1==4) R1=-1;
    	        ct[i]=k[R1+1][C1];
    	        i++;
    	        ct[i]=k[R2+1][C2];
    	     }
    	     //3. diff row & column
    	     else
    	     {
    	        ct[i]=k[R1][C2];
    	        i++;
    	        ct[i]=k[R2][C1];
    	     }
    	     i++;
    	     ct[i]='\0';
          }
          //--------------------------------------------------------
          //IF BOTH CHARACTERS ARE DIFFERENT IN PLAINTEXT
          else if(pt[j]!=pt[j+1])	//Plaintext has 2 diff letters
          {
    	     //1. same row
    	     R1=ROW(pt[j]); C1=COL(pt[j]);
    	     R2=ROW(pt[j+1]); C2=COL(pt[j+1]);
    	     if(R1==R2)
    	     {
    	        if(C1==4) C1=-1;   //in case of last letter
    	        if(C2==4) C2=-1;   //in case of last letter
    	        ct[i]=k[R1][C1+1];
    	        i++;
    	        ct[i]=k[R1][C2+1];
    	     }
    	     //2. same column
    	     else if(C1==C2)
    	     {
    	        if(R1==4) R1=-1;  //in case of last letter
    	        if(R2==4) R2=-1;  //in case of last letter
    	        ct[i]=k[R1+1][C1];
    	        i++;
    	        ct[i]=k[R2+1][C2];
    	     }
    	     //3. diff row & column
             else
    	     {
    	        ct[i]=k[R1][C2];
    	        i++;
    	        ct[i]=k[R2][C1];
    	     }
    	     i++;
    	     j++;
          }
          //--------------------------------------------------------
          /*IF BOTH CHARACTERS ARE SAME IN PAIR OF PLAINTEXT
          INSERT ADDITIONAL CHARACTER 'x' */
          else if(pt[j]==pt[j+1])    //if both the letters are same
          {
    	     //1. same row
    	     R1=ROW(pt[j]); C1=COL(pt[j]);
             R2=ROW('x');   C2=COL('x');  //row & col of 'x'
    	     if(R1==R2)
    	     {
    	       if(C1==4) C1=-1;     //if last letter
    	       ct[i]=k[R1][C1+1];
    	       i++;
    	       ct[i]=k[R1][C2+1];
    	     }
    	     //2. same column
             else if(C1==C2)
    	     {
    	        if(R1==4) R1=-1;
    	        ct[i]=k[R1+1][C1];
    	        i++;
    	        ct[i]=k[R2+1][C2];
    	     }
    	     //3. diff row & column
    	     else
    	     {
    	        ct[i]=k[R1][C2];
    	        i++;
    	        ct[i]=k[R2][C1];
    	     }
    	     i++;
          }
       }
       ct[i]='\0';
       cout<<endl<<"Cipher text:"<<ct;
       playfair_decrypt(ct);
    }
    void playfair_decrypt(char ct[])
    {
       char ptxt[20];
       int i,j,m=0,R1,R2,C1,C2;
       for(i=0;ct[i]!='\0';i++)
       {
             R1=ROW(ct[i]);   C1=COL(ct[i]);
             R2=ROW(ct[i+1]); C2=COL(ct[i+1]);
             if(R1==R2)
    	     {
    	        if(C1==0) C1=5;   //in case of last letter
    	        if(C2==0) C2=5;   //in case of last letter
    	        ptxt[m]=k[R1][C1-1];
    	        m++;
    	        ptxt[m]=k[R1][C2-1];
    	     }
    	     //2. same column
    	     else if(C1==C2)
    	     {
    	        if(R1==0) R1=5;  //in case of last letter
    	        if(R2==0) R2=5;  //in case of last letter
    	        ptxt[m]=k[R1-1][C1];
    	        m++;
    	        ptxt[m]=k[R2-1][C2];
    	     }
    	     //3. diff row & column
             else
    	     {
    	        ptxt[m]=k[R1][C2];
    	        m++;
    	        ptxt[m]=k[R2][C1];
    	     }
             m++;
             ptxt[m]='\0';
             i++;
        }
        cout<<endl<<endl<<"Decrypted TEXT:"<<ptxt<<endl<<endl;
    }
};

int main()
{
   char pt[50];
   cout<<"------------------------------PlayFair Cipher-----------------------"<<endl<<endl;
   cout<<"Enter Plaintext:";
   cin>>pt;
   cout<<endl<<"THE KEY IS:"<<endl<<endl;
   for(int i=0;i<5;i++)
   {
      cout<<"| ";
      for(int j=0;j<5;j++)
      {
	    cout<<" "<<k[i][j]<<" ";
      }
      cout<<"| ";
      cout<<endl;
   }
   PlayFair p1;
   p1.playfair(pt);
   //getch();
}
