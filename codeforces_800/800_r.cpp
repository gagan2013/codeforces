#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        if(p%q==0)
        {
            cout<<"2"<<endl;
            cout<<1<<" "<<p-1<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<p<<endl;
        }
    }
}