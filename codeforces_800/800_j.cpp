#include <bits/stdc++.h>
using namespace std;

int check(int k,int l)
{
    int v[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    return v[k][l];
}
int main() 
{
    int x;
    cin>>x;
    while(x--)
    {
        char c[10][10];
        for (int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++){
                cin>>c[i][j];
            }
        }
        int cnt=0;
        for (int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++){
                if(c[i][j]=='X')
                    cnt+=check(i,j);
            }
        }
        cout<<cnt<<endl;
    }
}