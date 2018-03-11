#include <iostream>
using namespace std;
class father
{
  public:
  int fage;
  char s[10];
  void fun()
  {
    cout<<"\nEnter father name";
    cin>>s;
    cout<<"\nEnter father age";
    cin>>fage;
  }
  void display()
  {
    cout<<"\nFather Name:"<<s;
    cout<<"\nFather Age:"<<fage;
  }
};
class Son:public father
{
  public:
  int sage;
  char str[100];
  void fun1()
  {
     cout<<"\nEnter son name";
    cin>>str;
    cout<<"\nEnter son age";
    cin>>sage;
  }
  void display1()
  {
    cout<<"\nSon Name:"<<str;
    cout<<"\nSon Age:"<<sage;
  }
};
class Daugh:public father
{
  public:
  int dage;
  char c[100];
  void fun2()
  {
    cout<<"\nEnter daughter name";
    cin>>c;
    cout<<"\nEnter daughter age";
    cin>>dage;
  }
  void display2()
  {
    cout<<"\nDaughter Name:"<<c;
    cout<<"\nDaughter Age:"<<dage;
  }
};
int main()
{
  Son s;
  Daugh d;
  s.fun();
  s.fun1();
  d.fun2();
  s.display();
  s.display1();
  d.display2();
  return 0;
}
