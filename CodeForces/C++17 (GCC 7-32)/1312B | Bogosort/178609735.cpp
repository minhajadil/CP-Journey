// Problem: B. Bogosort
// Contest: Codeforces - Educational Codeforces Round 83 (Rated for Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
bool cmp(int x , int y)
{
 return x>y ;
}
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
  sort(a,a+n,cmp) ;
  
  for(auto it :a)
  {
   cout << it << " " ;
  }
  cout << endl ;
  
  
  
 }
 
 
 
}