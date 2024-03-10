#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
ll binexp(ll a , ll b,ll m )
{
 
   ll ans =1 ;
 
   while(b!=0)
   {
    if(b&1) ans = (ans* a)%m;
    b>>=1 ;
    a=(a*a)%m ;
   }
   return ans ;
 
}
 
 
 
int main()
{
  ll n ; cin >> n ;
 
 
  cout << binexp(5,n,100) << endl ; 
 
}