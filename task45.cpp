#include<iostream>
using namespace std;
class large
{
  public:
  int num1,num2;
  large()
  {
  num1=22;
  num2=43;
  }
  void compute()
  {
    if(num1>num2)
    {
      cout<<num1<<" "<<"is largest of"<<" "<<num1<<" "<<"and"<<" "<<num2;
    }
    else
    {
      cout<<num2<<" "<<"is largest of"<<" "<<num1<<" "<<"and"<<" "<<num2;
    }
  }
};
int main()
{
  large l;
  l.compute();
}
