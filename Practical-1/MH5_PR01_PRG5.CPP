#include<iostream>
using namespace std;
int Palindrome(int num){
    int rem,sum=0,temp;
    temp = num;
    while(num>0){
        rem = num%10;
        sum = (sum*10)+rem;
        num /= 10;
    }
    if(temp == sum){
        cout<<temp<<" is Palindrome."<<endl;
    }
    else{
        cout<<temp<<" is not Palindrome."<<endl;
    }
}
int Prime(int num){
    int flag=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
             flag=0;
        }
    }
    if(flag==1)
        cout<<num<<" is Prime"<<endl;
    else
        cout<<num<<" is not Prime"<<endl;
}
int Factors(int num){
    cout<<"Factors: "<<endl;
    for(int i=1;i<=num;i++){
        if(num%i==0)
            cout<<i<<endl;
    }
}
int Perfect(int num){
    int cnt=0;
    for(int i=1;i<num;i++){
        if(num%i==0)
            cnt = cnt + i;
    }
    if(cnt==num)
        cout<<num<<" is a Perfect"<<endl;
    else
        cout<<num<<" is not a Perfect"<<endl;
}
int som(int n){
    int sum=0;
    for (int i = n; i > 0; i/=10)
    {
        int rem = i%10;
        sum = sum+rem;
    }
    cout<<"Sum of Digit = "<<sum<<endl;
    
}
int main(){
    while (1){
        cout<<"\nSelection window:"<<endl;
        cout<<"1.Number is Palindrom or not"<<endl;
        cout<<"2.Number is Perfect or not"<<endl;
        cout<<"3.Number is Prime or not"<<endl;
        cout<<"4.Factors of given number"<<endl;
        cout<<"5.Sum of Digit"<<endl;
        cout<<"6.Exit"<<endl;
        int ch;
        cout<<"Enter a choice: ";
        cin>>ch;
        int num;
        if(ch != 6){
            cout<<"Enter a number: ";
            cin>>num;
        }
        switch (ch)
        {
        case 1:
            Palindrome(num);
            break;
        case 2:
            Perfect(num);
            break;
        case 3:
            Prime(num);
            break;
        case 4:
            Factors(num);
            break;
        case 5:
            som(num);
            break;
        case 6:
            exit(0);
        default:
            cout<<"Invalid choice: "<<endl;
            break;
        }
    }
}