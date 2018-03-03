
#include<iostream>
using namespace std;
int main()
{
    int i,j=0;
    for(i=1;i<=110;i++)
    {
        
        if(i%3==0&&i%5!=0)
        cout<<"coza ";
        else if(i%5==0&&i%3!=0)
        cout<<"Loza ";
        else if(i%7==0)
        cout<<"Woza ";
        else if(i%5==0&&i%3==0)
        cout<<"CozaLoza ";
        else
        cout<<i<<" ";
        j++;
        if(j==11)
        {
        cout<<"\n";
        j=0;
        }
    }
}
