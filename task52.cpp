2.Create a class called as shapes and it should have 4 methods with same name area such that it gives area of Square,Circle,Rectangle and Triangle by using Overloading concepts.
#include <iostream>
using namespace std;
 
class result{
   public:
      void area(int a) {
        cout << "Area of square: " << a*a << endl;
      }
      public:
      void area(float r) {
        cout << "Area of circle " << 3.14*r*r<< endl;
      }
      public:
      void area(int b,int h) {
        cout << "Area of triangle:" << 0.5*b*h<< endl;
      }
      public:
      void area(float w,float l) {
        cout << "Area of rectangle:" << w*l<< endl;
      }
};

int main(void) 
{
   int a=4,b=2,h=3;
   float r=2.5,w=3.0,l=2.0;
   result p;
   p.area(a);
   p.area(r);
   p.area(b,h);
   p.area(w,l);
   return 0;
}
