// Problem: A. Sorting Parts
// Contest: Codeforces - Codeforces Global Round 19
 
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
  
 
  
  if(is_sorted(a,+a+n)) cout << "NO" << endl ;
  else cout <<"YES" << endl ;
 }
 
 
}