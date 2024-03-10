// Problem: A. Exciting Bets
// Contest: Codeforces - Codeforces Round #730 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  long long a , b ;
  cin >> a >> b ;
  
  // mistake  : not remembering the fact that 
  // gcd(0,k) = k
  
  
  if(a>b) swap(a,b) ;
  long long g = b-a ;
  
  if(g==0) cout << "0 0" << endl ;
  else
  {
   long long increase = b%g ;
   long long decrease = g - b%g ;
   
   cout << g << " " << min(increase,decrease) << endl ;
  }
  
 }
 
 
}