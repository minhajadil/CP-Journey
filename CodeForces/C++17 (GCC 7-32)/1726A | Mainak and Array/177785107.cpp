// Problem: A. Mainak and Array
// Contest: Codeforces - Codeforces Round #819 (Div. 1 + Div. 2) and Grimoire of Code Annual Contest 2022
 
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
  
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
  
  int ans=a[n-1]-a[0] ;
  
  for(int i =1 ;i<n ;i++)
  {
   ans=max(ans,a[i]-a[0]) ;
  }
  
  for(int i =0 ;i<n-1 ;i++)
  {
   ans= max(ans,a[n-1]-a[i]) ;
  }
  
  for(int i =0 ;i<n-1 ;i++)
  {
   ans=max(ans,a[i]-a[i+1]) ;
  }
  
  cout << ans <<endl ;
  
  
 
  
  
  
  
 }
 
 
}