
#include <iostream>

using namespace std;
class employee
{   public:
    char name[20];
    long int salary;
    float pf;
    void getdata()
    {
        cout<<"Enter employee name";
        cin>>name;
        cout<<"Enter monthly salary";
        cin>>salary;
        
    }
    void display(float a,int b)
    {   
        pf=a;
        int c;
        c=b;
        cout<<"Name:"<<name<<"\n";
        cout<<"Salary:"<<salary<<"\n";
        cout<<"PF Amount:"<<pf<<"\n";
        cout<<"After PF Salary:"<<c<<"\n";
    }
    
    
};
class salaryEmp:public employee
{   public:
    float t;
    int d;
    void calculate()
    {
    t=salary*0.12;
    d=salary-t;
    display(t,d);
  
    }
};
int main()
{
    salaryEmp a;
    a.getdata();
    a.calculate();
    return 0;
}

    
