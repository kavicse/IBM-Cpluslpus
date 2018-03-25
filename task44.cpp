#include<iostream>
using namespace std;
class area
{
  public:
  int side,length,breadth;
  float val;
  area()
  {
    side=20;
    val=side*side;
    cout<<"area of square:"<<" "<<val<<endl;
  }
  area(int a)
  {
    length=a;
    cout<<"enter the breadth";
    cin>>breadth;
    cout<<"area of rectangle:"<<" "<<length*breadth<<endl;
  }
  area(int a,int b)
  {
    length=a;
    breadth=b;
    val=0.5*length*breadth;
    cout<<"area of triangle:"<<" "<<val<<endl;
  }
};
int main()
{
  area g;
  area g1(12);
  area g2(12,32);
}

