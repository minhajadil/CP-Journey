#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int n , q ;
  cin>> n >> q ;
 
  long long  a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
 
  long long pref[n+1] ;
  pref[0]= 0 ;
 
  for(int i =1 ;i<=n ;i++)
  {   
   pref[i]=pref[i-1]+a[i-1] ;
   
  }
 
 
  while(q--)
  {
   long long l , r , k ;
   cin>> l >>r >> k ;
 
   long long x = pref[r]-pref[l-1] ;
 
   long long s = (pref[n]-x)+(k*(r-l+1)) ; 
 
   if(s%2!=0) cout << "YES" << endl ;
   else cout << "NO" << endl ;
  }
 
 
 
 
 }
 
 
 
 
 
 
}
 
 