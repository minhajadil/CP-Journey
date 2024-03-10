// Problem: B. Death's Blessing
// Contest: Codeforces - Educational Codeforces Round 138 (Rated for Div. 2)
 
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
  int b[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
  for(int i =0 ;i<n ;i++)
  {
   cin >>b[i] ;
  }
  
  long long sum =0 ;
  int max =b[0] ;
  
  for(int i =0 ;i<n ;i++)
  {
   
   sum+=(a[i]+b[i]) ;
   if(max<b[i]) max = b[i] ;
  }
  cout << sum-max << endl ;
  
  
  
  
 }
 
 
}