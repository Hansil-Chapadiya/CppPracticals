/*#include<iostream>
using namespace std;

int main()
{
	char s[10];
	int n;
	
	cout<<"Enter string in uppercase :";
	cin>>s;
	cout<<"Enter key :";
	cin>>n;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]+n)>90)
		{
		    s[i]=65+((s[i]+n)%91);
		}
		else
		{
			s[i]=s[i]+n;
		}
	}
	cout<<"\n\nEncoded message :"<<s<<endl;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]+n%65)<65)
		{
		    s[i]=90+(64%(s[i]+n%65));
		    
		}
		else
 {
			s[i]=s[i]-n;
		}
	}
	cout<<"\n\nDecoded message :"<<s;
	
}
#include<iostream>
using namespace std;

int main()
{
	char s[10];
	int n;
	
	cout<<"Enter string in uppercase :";
	cin>>s;
	cout<<"Enter key :";
	cin>>n;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]+n)>90)
		{
		    s[i]=65+((s[i]+n)%91);
		}
		else
		{
			s[i]=s[i]+n;
		}
	}
	cout<<"\n\nEncoded message :"<<s<<endl;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]+n%65)<65)
		{
		    s[i]=90+(64%(s[i]+n%65));
		    
		}
		else
		{
			s[i]=s[i]-n;
		}
	}
	cout<<"\n\nDecoded message :"<<s;
	
}*/
#include<iostream>
#include<string.h>
using namespace std;

                  
int main()
{  
    char str[20],copy[20];
    int key,i;
    cout << "Enter String with capital letters : ";
    cin >> str;
    cout << "Shifting value : ";
    cin >> key;
    for(i=0; str[i] != '\0'; i++)
    {
        copy[i] = ((str[i] + 'A' + key)%26) + 'A';
    }
    copy[i] = '\0';
    cout << "ENCODED STRING = " << copy << endl;
    
    /*for(i=0; copy[i] != '\0'; i++)
    {
        if(copy[i] >= 65 and copy[i] <= 90)
        {//copy[i] >= 'A' and copy[i] <= 'Z'
            str[i] = copy[i] - shift;
        }
        if(str[i] < 65)
        {
            //str[i] < 'A'
            str[i] = str[i] + 26;
        }
        
    }
    str[i] = '\0';
    cout << "DECODED STRING = " << str << endl;*/

    for (int j = 1; j <= 25; j++)
    {
        for(i=0; copy[i] != '\0'; i++)
        {
           str[i] = ((copy[i] + 'A' + j)%26) + 'A';
        }
        str[i] = '\0';
        cout<<"KEY "<<j<< " "<<str<<endl;
    }
    
}