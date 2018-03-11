#include <iostream>
using namespace std;
class one
{
  public:
  int a;
  void fun()
  {
    cout<<"\nEnter a:";
    cin>>a;
  }
};
class two:public one
{
  public:
  int b;
  void fun1()
  {
    cout<<"\nEnter b:";
    cin>>b;
  }
};
class Add:public two
{
  public:
  int c;
  void add()
  {
    c=a+b;
    cout<<"\nAddition:"<<c;
  }
};
int main()
{
  Add obj;
  obj.fun();
  obj.fun1();
  obj.add();
  return 0;
}
