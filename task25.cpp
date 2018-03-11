
 
#include <iostream>
using namespace std;
 

class value
{
 public:
  	int a,b;
  	public:
    void Value()
    {
      cout << "Enter a:" << endl;
      cin>>a;
      cout<<"\nEnter b:";
      cin>>b;
    }
};
 

class Add:virtual public value
{
     public:
    	int c;
    public:
     void add()
    {
        c=a+b;
    }
};
class Sub: virtual public Add
{
 public:
 	int d;
 	public:
 	void sub()
 	{
 		d=a-b;
	 }
};
 
class Display: public Sub
{
	public:
	void res()
	{
     cout<<"\nAddition"<<c;
     cout<<"\nSubtraction"<<d;	
	}
};
 

int main()
{   
    Display obj2;
    obj2.Value();
    obj2.add();
    obj2.sub();
    obj2.res();
    return 0;
}
