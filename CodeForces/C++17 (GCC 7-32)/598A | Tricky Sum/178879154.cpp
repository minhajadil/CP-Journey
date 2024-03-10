// Problem: A. Tricky Sum
// Contest: Codeforces - Educational Codeforces Round 1
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  long long n ;
  cin >> n ;
  long long sum =0 ;
  long long sum1=0 ;
  
  sum= (n*(n+1))/2 ;
  //cout << sum << endl ;
  
  long long p2=1 ;
  
  while(p2<=n)
  {
   //cout << p2 << endl ; 
   sum-=2*p2 ;
   
   p2=p2*2 ;
  }
  cout << sum << endl ;
  
  
  
  
 }
 
 
}