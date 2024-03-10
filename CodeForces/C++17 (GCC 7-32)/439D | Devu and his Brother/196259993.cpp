#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int n , m ;
  cin >> n >> m ;
  int x = min(n,m) ;
  int a[n] ;
  int b[m] ;
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
  }
  for(int i =0 ;i<m ;i++)
  {
    cin >> b[i] ;
  }
 
  sort(a,a+n) ;
  sort(b,b+m) ;
 
  reverse(b,b+m) ;
   long long sum =0 ;
  for(int i =0 ;i<x ;i++)
  {
    
    if(a[i]<b[i]) sum+=(b[i]-a[i]) ;
  }
  cout << sum << endl ;
 
 
 
}