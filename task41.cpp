#include <iostream>
using namespace std;
class student
{
  public:
  string sname,rank;
  int srollno;
  float height,weight;
  student()
  {
    sname="Hemalatha";
    srollno=26;
    height=160;
    weight=45;
    rank="first";
  }
  void show()
  {
    cout<<"STUDENT NAME:"<<sname<<endl;
    cout<<"STUDENT ROLL NO:"<<srollno<<endl;
    cout<<"STUDENT HEIGHT:"<<height<<endl;
    cout<<"STUDENT WEIGHT:"<<weight<<endl;
    cout<<"STUDENT RANK:"<<rank<<" "<<"rank"<<endl;
  }
  ~student()
  {
    
  }
  };
int main()
{
  student s;
  s.show();
  
}
