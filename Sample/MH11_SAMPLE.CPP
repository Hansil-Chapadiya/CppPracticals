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
        if(str[i] >= 65 and str[i] <= 90)
        {//str[i] >= 'A' and str[i] <= 'Z'
            copy[i] = str[i] + key;
        }
        if(copy[i] > 90)
        {//copy[i] > 'Z'
            copy[i] = copy[i] - 26;
        }
        
    }
    copy[i] = '\0';
    cout << "ENCODED STRING = " << copy << endl;
    for (int j = 1; j <= 25; j++)
    {
        for(i=0; copy[i] != '\0'; i++)
        {
            if(copy[i] >= 65 and copy[i] <= 90)
            {
            str[i] = copy[i] - j;
            }
            if(str[i] < 65)
            {
            //str[i] < 'A'
            str[i] = str[i] + 26;
            }
        
        }
        str[i] = '\0';
        cout<<"KEY "<<j<<" =  "<<str<<endl;
    }
}
