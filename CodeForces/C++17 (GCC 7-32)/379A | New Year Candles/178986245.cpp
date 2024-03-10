// Problem: A. New Year Candles
// Contest: Codeforces - Good Bye 2013
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int  n , k ;
 
 cin >> n >> k ;
 
 int cnt =0 ;
 
 while(n!=0)
 {
  cnt++ ;
  if(cnt%k==0)
  {
   n++ ;
  }
  n-- ;
  
 }
 cout << cnt << endl ;
 
 
}