#include<iostream>

using namespace std;
class simcard
{
    public:
      string cname;
      long int num;
      float balance;
      string dataplans;
      
         
         void balancecheck()
      {
        cout<<balance<<"\n";  
      }
      string getcompany()
      {
      return cname;
      }
       int isplanactive()
       {
           if(dataplans=="Available dataplan")
           return 1;
           else
           return 0;
       }
         
        
      
};
int main()
{
    simcard s1;
    string name;
    int n1;
    s1.cname="Airtel";
    s1.num=9923456701;
    s1.balance=20.50;
    s1.dataplans="No dataplan";
    simcard s2;
    s2.cname="Aircel";
    s2.num=9876543210;
    s2.balance=50.00;
    s2.dataplans="Available dataplan";
    s1.balancecheck();
    name=s1.getcompany();
    cout<<name<<"\n";
    n1=s1.isplanactive();
    cout<<n1<<"\n";
    s2.balancecheck();
    name=s2.getcompany();
    cout<<name<<"\n";
    n1=s2.isplanactive();
    cout<<n1;
    return 0;
}
