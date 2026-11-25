#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v ={24,74,1,58,99,50,13,50,84,67,50,50};
    sort(v.begin(),v.end());
    // a
    auto it14 = lower_bound(v.begin(),v.end(),14);
    cout<<*it14<<"\n";
    // b
    auto it67 = lower_bound(v.begin(),v.end(),67);
    cout<<*it67<<endl<<"\n";
    // c
    auto it = lower_bound(v.begin(),v.end(),50);
    cout<<*it<<endl<<"\n";
    // d
    auto itlow = lower_bound(v.begin(),v.end(),50);
    auto itup = upper_bound(v.begin(),v.end(),50);
    cout<<itup-itlow<<"\n";
    // e
    auto up = upper_bound(v.begin(),v.end(),50);
    cout<<*it<<endl<<"\n";
    // f
    cout<<*v.begin()<<"\n";
    // g
    cout<<*v.rbegin()<<"\n";
    // h
    auto it1 = v.begin();
    it1++;
    cout<<*it1<<endl<<"\n";
    // i
    auto it2 = v.rbegin();
    it2--;
    cout<<*it2<<endl<<"\n";
    // j
    cout<<v.size()<<"\n";
    // k
    cout<<!v.empty()<<"\n";

    // for sets
    
    vector<int> k ={24,74,1,58,99,50,13,50,84,67,50,50};
    set<int> s;
    for(auto &c : k){
       s.insert(c);
    }
    // a
    auto i14 = lower_bound(s.begin(),s.end(),14);
    cout<<*it14<<"\n";
    // e
    auto u = upper_bound(s.begin(),s.end(),50);
    cout<<*it<<endl<<"\n";
    // f
    cout<<*s.begin()<<"\n";
    // g
    cout<<*s.rbegin()<<"\n";
    // h
    auto i1 = s.begin();
    it1++;
    cout<<*it1<<endl<<"\n";
    // i
    auto t2 = s.rbegin();
    it2--;
    cout<<*it2<<endl<<"\n";
    // j
    cout<<s.size()<<"\n";
    // k
    cout<<!s.empty()<<"\n";   
    // l
    s.erase(50);
    for(auto &c : s){
       cout<<c<<" ";
    }  
    // m
    s.erase(*s.begin());
    for(auto &c : s){
       cout<<c<<" ";
    } 
}