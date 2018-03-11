
#include <iostream>
using namespace std;

class Person
{
     public:
        string profession;
        int age;
        Person(): profession("unemployed"), age(16) { }
        void display()
        {
             cout << "My profession is: " << profession<<"\n" ;
             cout << "My age is: " << age<<"\n"  ;
             walk();
             talk();
             run();
        }
        void walk() 
        { 
            cout << "I can walk."<<"\n" ; 
            
        }
        void talk() 
        { 
            cout << "I can talk."<<"\n" ;
        }
        void run()
        {
            cout<<"I can run."<<"\n" ;
        }
};
class MathsTeacher : public Person
{
    public:
       void teachMaths()
       { 
           cout << "I can teach Maths."<<"\n" ;
           
       }
};
class Footballer : public Person
{
    public:
       void playFootball() 
       { 
           cout << "I can play Football."<<"\n" ;
        }
};
class Businessman: public Person
{
    public:
       void runBusiness() 
       { 
           cout << "I can run Busines."<<"\n";
        }
};
int main()
{
     MathsTeacher t;
     t.profession = "Teacher";
     t.age = 23;
     t.display();
     t.teachMaths();
     Footballer f;
     f.profession = "Footballer";
     f.age = 19;
     f.display();
     f.playFootball();
     Businessman b;
     b.profession="Businessman";
     b.age= 35;
     b.display();
     b.runBusiness();
     return 0;
}
