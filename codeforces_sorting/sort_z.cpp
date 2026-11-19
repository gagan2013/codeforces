#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){    
         int n,x;
         cin>>n>>x;
         vector<int> v(n);
         for (int j = 0; j < n; j++){
            cin>>v[j];
         }
         sort(v.begin(),v.end(),greater<int>());
         int cnt=0;
         int sum=0;
         for (int k = 0; k < n; k++){
            sum++;
            if(sum*v[k]>=x){
               cnt++;
               sum=0;
            }
         }
         cout<<cnt<<endl;
    }
}