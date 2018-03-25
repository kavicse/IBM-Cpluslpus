1.Create a class Bank and it shoud have the Interest method by using hierarchical inheritance create diffrent bank class which Inherits Bank class and overrides Interest method.

Program:
#include<iostream>
using namespace std;
class Bank
{
    public:
    void interest()
    {
        cout<<"\n Interest is:10%";
    }
};
class CanaraBank:public Bank
{
    public:
    void interest()
    {
        cout<<"\n Interest is:11%";
    }
};
class ICICIBank:public Bank
{
    public:
    void interest()
    {
        cout<<"\n Interest is:12%";
    }
};
class AxisBank:public Bank
{
    public:
    void interest()
    {
        cout<<"\n Interest is:13";
    }
};
int main()
{
    Bank b;
    b.interest();
    ICICIBank i;
    i.interest();
    CanaraBank c;
    c.interest();
    AxisBank a;
    a.interest();
    return 0;
}
