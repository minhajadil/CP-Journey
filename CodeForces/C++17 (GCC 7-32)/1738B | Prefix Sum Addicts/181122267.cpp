// Problem: B. Prefix Sum Addicts
// Contest: Codeforces - Codeforces Global Round 22
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int x,n ;
  cin >> x>> n ;
  int a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
  
  if(n==1) cout << "YES" << endl ;
  else 
  {
  
  vector<long long> newness(n-1) ;
  //newness[0]=-(LONG_MAX) ;
  //int j = n ;
  
  for(int i =n-1 ;i>=1 ;i--)
  {
   newness[i-1]= a[i]- a[i-1] ;
  }
  // //newness[0]= a[1]-a[0] ;
//   
  // for(auto it :newness)
  // {
   // cout << it << " " ;
  // }
  // cout << endl ;
  
  
  if(is_sorted(newness.begin(),newness.end())) 
  {
   //cout << a[0] << " " << newness[0] << endl ;
   
   if(a[0]<=newness[0]*(x-n+1)) cout << "YES" << endl ;
   else cout << "NO" << endl ;
   
  }
  else cout << "NO" << endl ;
  
  
  
  
  
 } 
 }
 
 
 
}