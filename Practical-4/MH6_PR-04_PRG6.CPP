#include <iostream>
using namespace std;
class df;
class dm
{
    private :
        float m;
        float cm;
    public :
        void get()
        {
            cout << "Enter Meter : ";
            cin >> m;
            cout << "Enter Centimetre : ";
            cin >> cm;
            cout << endl;
        }
        friend void add(dm,df);
};
class df
{
    private :
        float feet;
        float inch;
    public :
        void get()
        {
            cout << "Enter Feet : ";
            cin >> feet;
            cout << "Enter Inch : ";
            cin >> inch;
            cout << endl;
        }
        
        friend void add(dm,df);
};
void add(dm m, df f)
{
    df temp;
    
    m.m = m.m * 3.281;
    m.cm = m.cm * 0.394;
    
    temp.feet = m.m + f.feet;
    temp.inch = m.cm + f.inch;
    
    if(temp.inch >= 12)
    {
        temp.feet += temp.inch /12.0;
        temp.inch = (int)temp.inch % 12;
    }
            
    cout << "After Addition : " << endl;
    cout << temp.feet << "' " << temp.inch << "\"" << endl;
}
int main()
{
    dm mm;
    df ff;
    cout << "Enter values for dm object" << endl;
    mm.get();
    
    cout << "Enter values for df object" << endl;
    ff.get();
    
    add(mm,ff);
}