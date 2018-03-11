#include<iostream>
using namespace std;
class student
{
    protected:
    char name[20],g[20];
    int m1,m2,m3,tot;
    public:
    void getdata()
    {
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter undergraduate or graduate";
        cin>>g;
        cout<<"Enter mark1\n";
        cin>>m1;
        cout<<"Enter mark2\n";
        cin>>m2;
        cout<<"Enter mark3\n";
        cin>>m3;
    }
    void calculate()
    {
        if(g=="graduate")
        {
            tot=m1+m2+m3;
            if(tot/3>=80)
            cout<<name<<"\tpass!!!\n";
            else
            cout<<name<<"\tFail!!!\n";
        }
        else
        {
             tot=m1+m2+m3;
            if(tot/3>=70)
            cout<<name<<"\tpass!!!\n";
            else
            cout<<name<<"\tFail!!!\n";
        }
    }
    
     
};
int main()
{
    student s;
    s.getdata();
    s.calculate();
    return 0;
}
