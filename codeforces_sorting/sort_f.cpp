#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int x;
   cin>>x;
   vector<int> pr;
   vector<int> ma;
   vector<int> pe;
      for (int i=0; i<x; i++)
      {
         int d;
         cin>>d;
         if(d==1)
            pr.push_back(i);
         else if(d==2)
            ma.push_back(i);
         else if(d==3)
            pe.push_back(i);
      }
      int h=min({pe.size(),ma.size(),pr.size()});
      cout<<h<<endl;
      for (int i=0; i<h; i++)
      {
            cout<<pr[i]+1<<" "<<ma[i]+1<<" "<<pe[i]+1<<endl;
      }
   
}