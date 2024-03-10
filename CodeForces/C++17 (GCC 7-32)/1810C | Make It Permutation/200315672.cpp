#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
   ll n , c ,d ;
   cin >> n >> c >> d ;
 
   set<ll > s ;
 
   ll ct =0  ;
 
   for(int i =0 ;i<n ;i++)
   {
    ll x ;
    cin >> x ;
 
    if(s.count(x)!=0) ct+=c ;
    else s.insert(x) ; 
   }
   
   ll sz =s.size() ;
   ll mn =1e18 ;
 
   for(int i =1 ;i<=sz ;i++)
   {
    ll now = *s.begin() ;
 
    mn =min(mn,(now-i)*d+(sz-i)*c) ;
    //cout << mn << endl ;
    s.erase(now) ;
   }
   mn = min(mn, sz*c+d) ;
 
   cout << ct+mn << endl ;
 
 
 
 
  }
}