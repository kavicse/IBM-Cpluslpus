#include <iostream>
using namespace std;
class Add
{
  public:
  int a,b;
  void fun()
  {
    cout<<"Enter two numbers";
    cin>>a;
    cin>>b;
  }
};
class Result:public Add
{
  public:
  int c;
  void result()
  {
    c=a+b;
    cout<<"Addition:"<<c;
  }
};
int main()
{
  Result obj;
  obj.fun();
  obj.result();
  return 0;
}
