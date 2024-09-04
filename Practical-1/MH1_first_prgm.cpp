#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter range of array: "<<endl;
    cin>>n;
    int *p;
    p = new int[5];
    cout<<p;
    for(int i=0; i<n; i++){
        cout<<"Element:"<<i+1<<endl;;
        cin>>p[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <=n-1; j++)
        {
            if (p[i] > p[j])
            {
                int temp;
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            
        }
        
    }
    
    for(int i=0; i<n; i++){
        cout<<"Element: "<<i+1<<"="<<p[i]<<endl;
    }

    return 0;
}