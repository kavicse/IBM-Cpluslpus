#include<iostream>

using namespace std;
class simcard
{
    public:
      string cname;
      long int num;
      float balance;
      string dataplans;
       simcard(string a,long int n,float b,string d)
      {
          cname=a;
          num=n;
          balance=b;
          dataplans=d;
      }
      void dis()
       {
         cout<<cname<<"\n";
         cout<<num<<"\n";
         cout<<balance<<"\n";
         cout<<dataplans<<"\n";
      }
};
int main()
{
    simcard s1("Airtel",9923456701,20.50,"No plan");simcard s2("Aircel",9876543210,50.00,"Active plan");
    simcard s3("Vodafone",8796543234,45.00,"No plan");
    s1.dis();
    s2.dis();
    s3.dis();
    return 0;
}
