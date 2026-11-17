#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        for (int i = 0; i < x; i++) {
            if((x+1)%3==0 || (x-1)%3==0)
            {
                cout<<"First"<<endl;
                break;
            }
            else
            {
                cout<<"Second"<<endl;
                break;
            }
        }
    }
}