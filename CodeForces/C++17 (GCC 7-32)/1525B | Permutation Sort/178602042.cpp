// Problem: B. Permutation Sort
// Contest: Codeforces - Educational Codeforces Round 109 (Rated for Div. 2)
 
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
  if(a[0]==n && a[n-1]==1) cout << 3 << endl ;
  else if(is_sorted(a,a+n)==1) cout << 0 << endl ;
  else if(a[0]!=1 && a[n-1]!=n) cout << 2 <<endl ; 
  else cout << 1 << endl ;
  
  
  
 }
 
 
}