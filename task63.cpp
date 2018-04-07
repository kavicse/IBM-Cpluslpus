#include <iostream>
using namespace std;

int main()
{   
    int n;
    char name[4][10]={"Ravi","somu","Latha","Raju"};
    cout<<"Enter number to display name";
    cin>>n;
    try
    {
    if(n>4)
        throw n;
    else
        cout<<name[n-1];
    }
    
    catch(int s)
    {
    cout<<s<<" is invalid";
     }
    return 0;
    
}
