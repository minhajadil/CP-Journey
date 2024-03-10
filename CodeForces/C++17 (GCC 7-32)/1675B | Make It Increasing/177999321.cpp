// Problem: B. Make It Increasing
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
 
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
  int b = 1 ;
  int cnt =0 ;
  
  for(int i =n-2 ;i>=0 ;i--)
  {
   while(a[i]>=a[i+1] && a[i]>0)
   {
    a[i]= a[i]/2 ;
    cnt++ ;
   }
   if(a[i]==a[i+1])
   {
    b=0 ;
    break ;
   }
  }
  if(b==1) cout << cnt << endl ;
  else cout << -1 << endl ;
  
  
  
 }
 
 
}