#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int x;
   cin>>x;
   while (x>0)
   {
      int a,b;
      cin>>a>>b;
      int c=0;
      for (int i=0; i<a; i++)
      {
         int n;
         cin>>n;
         if(n==b)
         {
           c++;
         }
      }
      if(c>0)
         cout<<"YES"<<endl;
      else 
         cout<<"NO"<<endl;
      x--;
   }
}