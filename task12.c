#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number:";
  cin>>num;
  if(num>=0)
  {
  switch(num)
  {
    case 1:
     cout<<"\nMonday";
     break;
    case 2:
     cout<<"\nTuesday";
     break;
    case 3:
     cout<<"\nWednesday";
     break;
    case 4:
     cout<<"\nThursday";
     break; 
    case 5:
     cout<<"\nFriday";
     break;
    case 6:
     cout<<"\nSaturday";
     break;
    case 7:
     cout<<"\nSunday";
     break;
  
    }
  }
  
  
  return 0;
}
