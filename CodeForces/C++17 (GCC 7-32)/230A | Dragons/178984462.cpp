// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
bool cmp(pair<int,int> p,pair<int,int>p2)
{
 if(p.first==p2.first) return p.second >p2.second ;
 else return p.first<p2.first ;
}
 
 
int main()
{
 int s , n ;
 cin >> s >> n ;
 
 int x[n] ;
 int y[n] ;
 vector<pair<int,int>>v  ;
 
 for(int i =0 ;i<n ;i++)
 {
  cin >> x[i] ;
  cin >> y[i] ;
  v.push_back({x[i],y[i]}) ;
  
 }
 
 
 // for(int i =0 ;i<n ;i++)
 // {
  // cin >> y[i] ;
//   
 // }
 
  sort(v.begin(),v.end(),cmp) ;
//   
  // for(auto it : v)
  // {
   // cout << it.first << " " << it.second << endl ;
  // }
//   
  int cnt =0 ;
 
 for(auto it : v)
 {
  if(it.first<s) 
  {
   cnt++ ;
   s+=it.second ;
  }
 }
 if(cnt==n) cout << "YES" << endl ;
 else cout << "NO" << endl ;
 
 
}