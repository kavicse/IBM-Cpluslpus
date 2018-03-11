#include<iostream>
using namespace std;
class parents
{
    public:
     char name[20];
     int age;
     void getfamily()
     {
         cout<<"Enter parent name";
         cin>>name;
         cout<<"Enter age";
         cin>>age;
     }
     void displayfamily()
     {
         cout<<"Parent name:"<<name<<"\n";
         cout<<"Age:"<<age<<"\n";
         
     }
};
class child:public parents
{
    public:
     char cname[20];
     int cage;
     void getchild()
     {
         cout<<"Enter child name";
         cin>>cname;
         cout<<"Enter age";
         cin>>cage;
     }
     void displaychild()
     {
         cout<<"child name:"<<cname<<"\n";
         cout<<"Age:"<<cage<<"\n";
         
     }
};
int main()
{
    child c;
    c.getfamily();
    c.getchild();
    c.displayfamily();
    c.displaychild();
    return 0;
}
