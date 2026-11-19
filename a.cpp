#include <bits/stdc++.h>
using namespace std;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main() 
{
    int a,b;
    cin>>a>>b;
    int xk,yk,xq,yq;
    cin>>xk>>yk>>xq>>yq;
    set< pair<int,int> > sk;
    for (int i = 0; i < 4; i++) 
    {
        sk.insert(xk+dx[i]*a,yk+dy[i]*b);
        sk.insert(xq+dx[i]*b,yq+dy[i]*a);
    }
    set< pair<int,int> > sq;
    for (int i = 0; i < 4; i++) 
    {
        sq.insert(xk+dx[i]*a,yk+dy[i]*b);
        sq.insert(xq+dx[i]*b,yq+dy[i]*a);
    }
    int cnt=0;
    for (auto &c : sk) 
    {
        if(sq.find(c)!=sq.end())
            cnt++;
    }
    cout<<cnt<<endl;
}
