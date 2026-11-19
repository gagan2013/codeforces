#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i;
    cin>>i;
    int x=0;
    for(int k=1;k<=i;k++)
    {
        string s;
        cin>>s;
        if( s == "X++"||s=="++X")
            x++;
        else
            x--;
    }
        cout<<x; 
    
}