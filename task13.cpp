#include <iostream>
using namespace std;
class conti
{
   public:
    char con[5][20];
};
int main()
{  
   conti c;
   cout<<"\nEnter the continents";
    for (int i=0; i<5; i++) 
    {
       cin>>c.con[i];
    }
    cout<<"\nContinents are";
    for (int i=0; i<5; i++) 
    {
      cout<<"\n";
        cout<<c.con[i];
    }
    return 0;
}
