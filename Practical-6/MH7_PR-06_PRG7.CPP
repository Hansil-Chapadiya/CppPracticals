#include<iostream>
using namespace std;
class alpha
{
  protected:
    int x;
  public:
    alpha(int i)
    {
       x=i;
       cout<<"alpha initiated\n";
    }
    void show_x()
    {
       cout<<"X="<<x<<endl;
    }
};
class beta
{
    protected:
        float y;
    public:
        beta(float j)
        {
            y=j;
            cout<<"beta initialized\n";
        }
        void show_y()
        {
            cout<<"Y="<<y<<endl;
        }
};
class gamma : public beta, public alpha
{
    int m;
    int n;
  public:
    gamma(int a, float b, int c, int d):alpha(a),beta(b)
    {
       m = c;
       n = d;
       cout<<"gamma initialized\n";
    }
    void show_mn()
    {
       cout<<"M="<<m<<endl;
       cout<<"N="<<n<<endl;
    }
};
main()
{
    gamma g(5, 10.5, 20, 30);
    cout<<endl;
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}