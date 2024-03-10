// Problem: C. Sum of Cubes
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 
 
 
 
 while(t--)
 {
  long long x ;
  cin >> x ;
  
  unordered_set<long long> c ;
  
  for(long long i = 1 ;i*i*i<=1000000000000 ;i++)
 {
  c.insert(i*i*i) ;
 }
 
 
 // for(auto it :c)
 // {
  // cout << it << " " ;
 // }
 // cout << endl ;
  
  int y = 0 ;
  
  for(long long i = 1 ; i*i*i<=x ;i++)
  {
   if(c.count(x-(i*i*i))) y=1 ; 
  }
  if(y==1) cout << "YES" << endl ;
  else cout << "NO" << endl ;
  
  
  
  
  
  
  
 }
 
 
}