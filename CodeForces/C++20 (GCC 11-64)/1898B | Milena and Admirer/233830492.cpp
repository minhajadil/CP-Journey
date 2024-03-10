#include<bits/stdc++.h>
using namespace std ;
 
 
 
int ceiling(int  a , int b )
{
return (a+b-1)/b ;
}
 
 
 
int main()
{
 int t ; cin >> t ;
 
 
 while(t--)
 {
  int n ; cin >> n ;
  int a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
 
  int cur = a[n-1] ;
  long long cnt =0 ;
 
  for(int i =n-2 ;i>=0 ;i--)
  {
   int k = ceiling(a[i],cur) ;
   cur = a[i]/k ;
   cnt+=k-1 ;
  }
 
  cout << cnt << endl ;
 
 }
 
}