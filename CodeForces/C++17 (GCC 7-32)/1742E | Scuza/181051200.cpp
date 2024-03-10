// Problem: E. Scuza
// Contest: Codeforces - Codeforces Round #827 (Div. 4)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  long long n,k ;
  cin >> n >> k  ;
  
  int a[n+1] ;
  long long pref[n+1] ;
  pref[0]=0 ;
 
  for(int i =1 ;i<=n ;i++)
  {
   cin >> a[i] ;
  }
  
  for(int i=1 ;i<=n ;i++)
  {
   pref[i]= pref[i-1]+a[i] ;
  }
  vector<int> maxi(n+1) ;
  maxi[0]=0 ;
  for(int i =1 ;i<=n ;i++)
  {
   maxi[i]= max(maxi[i-1],a[i]) ;
  }
  // for(auto it :maxi)
  // {
   // cout << it << " " ;
  // }
  // cout << endl ;
  
  while(k--)
  {
   long long x ;
   cin >> x ;
   int ans=0 , lo = 1 , hi = n ,mid ;
   
   while(lo<=hi)
   {
    mid = (lo+hi)/2 ;
    
    if(maxi[mid]<=x)
    {
     ans= mid ;
     lo = mid+1 ; 
    }
    else hi = mid-1 ;
    
   }
   cout << pref[ans] << " " ;
  }
  cout << endl ;
  
 
 }
 
 
}