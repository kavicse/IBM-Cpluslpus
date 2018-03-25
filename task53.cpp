3.Write a program to overload ++ operator using polymorphism.
Program:
#include <iostream>
using namespace std;
class Check
{
    private:
       int i;
    public:
       Check()
       {
           i=10;
       }
       void operator ++() 
       { 
           ++i; 
       }
       void Display() 
       {
           cout << "\ni=" << i; 
       }
};

int main()
{
    Check obj;    
    obj.Display();
    ++obj; 
    obj.Display();
    return 0;
}
