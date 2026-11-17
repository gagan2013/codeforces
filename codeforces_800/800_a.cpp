#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int x;
   cin>>x;
   while (x--)
   {
      int a,b;
      cin>>a>>b;
      vector<int> vun(a);  
      vector<int> vn(a);
      for (int i=0; i<a; i++)
         cin>>vun[i];
      vn=vun;
      sort(vn.begin(), vn.end());
      bool s=false;
      if(vn==vun)
         s=true;
      if(b>=2 || s==true)
         cout<<"YES"<<endl;
      else 
         cout<<"NO"<<endl;
   }
   
}