#include<iostream>
using namespace std;
class ipl
{
  public:
  int won;
  char team_name[100];
};
int main()
{
  ipl i;
  cout<<"Enter the team_name:";
  cin.get(i.team_name, 100);
  cout<<"Enter the number of matches won:";
  cin>>i.won;
 
  if(i.won>=9)
  {
    cout<<i.team_name<<"are eligible for playoffs***";
  }
  else
  {
    cout<<i.team_name<<"are not eligible for playoffs......";
  }
  return 0;
}
