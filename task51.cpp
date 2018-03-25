1) 1.Create a class called calculated in that have three methods with same name as Add() But it should have diffrent parameters (With int(2) parmeters,.with Float (2)parameters,with int(3) parameters,with double(3) parameters).
#include <iostream>
using namespace std;
 
class calculated{
   public:
      void add(int i,int j) {
        int s=i+j;
        cout << "Integer: " << s << endl;
      }
      public:
      void add(float f, float u) {
        float k=f+u;
        cout << "Float: " << k<< endl;
      }
      public:
      void add(int a,int b,int c) {
        int m=a+b+c;
      
        cout << "Integer: " << m << endl;
      }
      public:
      void add(double r,double x,double z) {
        double l=x+r+z;
        cout << "Double: " << l<< endl;
      }
};

int main(void) 
{
   int i=5,j=10,a=10,b=5,c=40;
   float f=5.5,float u=4.0;
   double r=10.00,x=67.0,z=89.0;
   calculated p;
   p.add(i,j);
   p.add(f,u);
   p.add(a,b,c);
   p.add(r,x,z);
   return 0;
}
