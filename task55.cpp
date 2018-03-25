2.create a  Base class called as Grand father Animal  which contains a method  void eat() and  by using Multilevel Inheritance create Four class called Father Animal ,Son Animal and Grand child animal all the class should override Void eat().
Program:
#include<iostream>
using namespace std;
class GrandFatherAnimal
{
  public:
  void eat()
  {
      cout<<"\n Grand Father Animal eating...";
  }
};
class FatherAnimal:public GrandFatherAnimal
{
  public:
  void eat()
  {
      cout<<"\n father Animal eating...";
  }
};
class SonAnimal:public FatherAnimal
{
    public:
    void eat()
    {
    cout<<"\n Son Animal eating...";
    }
};
class GrandChildAnimal:public SonAnimal
{
   public:
   void eat()
   {
    cout<<"\n Grand Child Animal eating...";
   }
};
int main()
{
    GrandChildAnimal g;
    g.eat();
    SonAnimal s;
    s.eat();
    FatherAnimal f;
    f.eat();
    GrandFatherAnimal gf;
    gf.eat();
    return 0;
}
