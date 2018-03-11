#include <iostream>
using namespace std;
class one
{
  public:
  void fun()
  {
    cout<<"\nHello";
  }
};
class two
{
  public:
  void fun1()
  {
    cout<<"\nHello";
  }
};
class three
{
  public:
  void fun2()
  {
    cout<<"\nHello";
  }
};
int main()
{
  one a;
  two b;
  three c;
  a.fun();
  b.fun1();
  c.fun2();
  return 0;
}
