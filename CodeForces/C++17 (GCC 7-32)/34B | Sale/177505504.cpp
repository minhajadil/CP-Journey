// Problem: B. Sale
// Contest: Codeforces - Codeforces Beta Round #34 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int n,m ;
  cin >> n >> m ;
  int a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
  sort(a,a+n) ;
  long long sum=0 ;
  for(int i =0 ;i<m ;i++)
  {
   if(a[i]<0) sum+=abs(a[i]) ;
  }
  cout << sum << endl;
  
 
 
 
}