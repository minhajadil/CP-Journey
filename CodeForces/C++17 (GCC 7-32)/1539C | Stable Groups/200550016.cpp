#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
ll ceiling(ll a , ll b )
{
return (a+b-1)/b ;
}
 
const int M = 1e9+7 ;
 
 
 
 
 
int main()
{
  
  ll n , k , x ;
  cin >> n >> k >> x ;
 
  ll a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
  }
  sort(a,a+n) ;
  ll l =1 ;
  vector<ll> gap ;
 
  for(int i =1 ;i<n ;i++)
  {
    if(a[i]-a[i-1]>x)
    {
      gap.push_back(a[i]-a[i-1]) ;
      l++ ;
    }
  }
 
 
  sort(gap.begin(),gap.end()) ;
 
  for(auto it :gap)
  { 
    ll need = ceiling(it,x)-1 ;
    //cout << need << endl ;
    if(need<=k)
    {
      k-=need ;
      l-- ;
    }
 
  }
  cout << l << endl ;
 
 
 
 
 
 
 
  
}