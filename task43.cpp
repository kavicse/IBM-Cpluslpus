#include<iostream>
using namespace std;
class compute
{
  public:
  int x,squ;
  compute(int a)
  {
    x=a;
  }
  void square()
  {
    squ=x*x;
    cout<<"square of "<<x<<" "<<"is"<<" "<<squ; 
  }
};
int main()
{
  compute c(5);
  c.square();
  }
