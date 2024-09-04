#include<iostream>
#include<string.h>
using namespace std;
class Media
{
    protected:
        char title[10];
        int price;
    public:
        Media(char *s, int p)
        {
            strcpy(title, s);
            price = p;
        }
        virtual void display() { }
};
class Book : public Media
{
    int pages;
    public:
        Book(char *s, int p, int pg):Media(s,p)
        {
            pages = pg;
        }
        void display();
};
class CD : public Media
{
    float timep;
    public:
        CD(char *s, int p, int tm):Media(s,p)
        {
            timep = tm;
        }
        void display();
};
void Book::display()
{
    cout<<"Title: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Pages: "<<pages<<endl;
}
void CD::display()
{
    cout<<"Title: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Play Time: "<<timep<<endl;
}
int main()
{
    Book BK("ANSI C++", 310, 535);
    CD Disk("Videos",250, 120);

    Media *p;
    p = &BK;
    cout<<"\nBOOK DETAILS:\n";
    p->display();
    p = &Disk;
    cout<<"\nCD DETAILS:\n";
    p->display();
}