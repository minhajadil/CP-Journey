#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
    #define ff first
    #define ss second
    
 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
  ll n ;
  cin >> n ;
  ll a[n+1] ;
 
  ll cnt =0 ;
 
 // a[j]-a[i]== j-i ;
  map<ll,ll> m ;
 
  for(int i =1 ;i<=n ;i++)
  {
    cin >> a[i] ;
    m[a[i]-i]++ ;
  }
 
  for(auto it : m)
  {
    cnt+=1LL*((it.ss)*(it.ss-1))/2 ;
  }
 
  cout << cnt << endl ;
 
  
 
 
 
 
  }
}