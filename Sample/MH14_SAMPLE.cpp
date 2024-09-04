#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string ss;
    ofstream of;
    of.open("MH14_SAMPLE.txt");
    while (of)
    {
        getline(cin,ss);
        if (ss == "-1")
        {
            break;;
        }
        
        of<<ss<<endl;

    }
    of.close();

    ifstream in;
    in.open("MH14_SAMPLE.txt");
    while (getline(in,ss))
    {
        cout<<ss<<endl;        
    }
    in.close();
      
}