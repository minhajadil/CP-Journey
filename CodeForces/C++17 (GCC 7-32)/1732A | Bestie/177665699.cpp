// Problem: A. Bestie
// Contest: Codeforces - Codeforces Round #830 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int n ;
  cin >> n ;
  int a[n] ;
  
  int gcd =0 ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
   gcd= __gcd(gcd,a[i]) ;
  }
  
  if(gcd==1) cout << 0 << endl ;
  else 
  {
   if(__gcd(gcd,n)==1) cout << 1 << endl ; 
   else if(__gcd(gcd,n-1)==1) cout << 2 << endl ;
   else cout << 3 << endl ; // gcd(n,n-1,g)==1 
  }
  
  
 }
 
 
}