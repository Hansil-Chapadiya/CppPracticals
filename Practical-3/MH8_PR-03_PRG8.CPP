#include<iostream>
using namespace std;
class Library
{
private:
    int book_id;
    char book_name[12], author_name[12];
    int stoke;
    float price;
public:
    void Getdata();
    void Stoke();
    void Order();
};

void Library::Getdata (/* args */)
{
    cout<<"Enter Book_Id: ";
    cin>>book_id;
    cout<<"Enter Book_Name: ";
    cin>>book_name;
    cout<<"Enter Author Name: ";
    cin>>author_name;
    cout<<"Enter Stoke of book: ";
    cin>>stoke;
    cout<<"Enter Price: ";
    cin>>price;
}

void Library::Stoke()
{
    cout<<endl<<"|Book_Id|\t|Book_Name|\t|Author_Name|\t|Stoke|\t|Price|"<<endl;
    cout<<book_id<<"\t"<<book_name<<"\t"<<author_name<<"\t"<<stoke<<"\t"<<price<<"\t"<<endl;
}

void Library::Order()
{
    cout<<"Enter Book_Id: ";
    cin>>book_id;
    cout<<"Enter Book_Name: ";
    cin>>book_name;
    cout<<"Enter Author_Name: ";
    cin>>author_name;
    cout<<"Enter Price: ";
    cin>>price;
}

int main(){
    Library l[5], l1;
    for (int i = 0; i < 5; i++)
    {
        l[i].Getdata();
    }
    do
    {
        int ch;
        cout<<"1.Show Stoke: "<<endl;
        cout<<"2.Order: "<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
            l[i].Stoke();
            }
            break;
        case 2:
            l1.Order();
            break;
        default:
            cout<<"Invalid Choice:";
            break;
        }
    } while (true);   
}


