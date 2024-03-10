// Problem: B. Vlad and Candies
// Contest: Codeforces - Codeforces Round #780 (Div. 3)
 
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
  sort(a,a+n) ;
  
  if(n==1 && a[0]!=1) cout << "NO" << endl ;
  else 
  {
   long long r =a[n-1] - a[n-2] ;
   if(r>=2) cout << "NO" << endl ;
   else cout <<"YES" << endl ;
  }
 }
 
 
}