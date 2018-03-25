
#include<iostream>
using namespace std;

class rectan
{
public:
  int len,bre,value;
  rectan(int a,int b)
  {
    len=a;
    bre=b;
  }
 
 void compute()
  {
    value=len*bre;
    cout<<"area of rectangle is"<<" "<<value;
  }
};

int main()
{
  rectan a(2,5);
  rectan a1(a);
  a1.compute();
}
