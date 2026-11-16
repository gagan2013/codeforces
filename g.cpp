#include <bits/stdc++.h>
using namespace std;
 
int row[5],col[5],diag[2];
int main()
{
    string s[5];
    for(int i=0;i<5;i++)
    {
       cin>>s[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(s[i][j]=='o')
                row[i]++;
                
            if(s[j][i]=='o')
                col[i]++;
            if(i==j && s[i][j]=='o')
                diag[0]++;
            if(i+j==4 && s[i][4-i]=='o')
                diag[1]++;    
        }
    }
    int ans=0;
    for (int  i = 0; i < 5; i++)
    {
        ans=max(ans,row[i]);
        ans=max(ans,col[i]);
    }
    ans=max(ans,diag[0]);
    ans=max(ans,diag[1]);
    
    cout<<5-ans;
}
