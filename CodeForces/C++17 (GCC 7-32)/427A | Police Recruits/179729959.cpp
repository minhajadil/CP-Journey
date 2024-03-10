// Problem: A. Police Recruits
// Contest: Codeforces - Codeforces Round #244 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int n , ind=0 ;
  
  cin >> n ;
  int a[n] ;
  
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
   if(a[i]==-1) ind =i ;
  }
  int cnt =0 ;
  int max =0 ;
  
  for(int i =0 ;i<=ind ;i++)
  {
   if(a[i]==-1) cnt++ ;
   else cnt-=a[i] ;
   if(cnt>max) max =cnt ;
  }
   cout << max << endl ;
  
 
 
 
 
}