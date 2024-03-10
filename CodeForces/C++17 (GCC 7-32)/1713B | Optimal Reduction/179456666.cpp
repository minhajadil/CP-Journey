// Problem: B. Optimal Reduction
// Contest: Codeforces - Codeforces Round #812 (Div. 2)
 
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
  
  int max =-1 ;
  int ind =-1 ;
  
  
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
   
   if(max<=a[i])
   {
    max=a[i] ;
    ind = i ;
   }
  }
  int x =1 ;
  
  for(int i =ind ;i<n-1 ;i++ )
  {
   if(a[i]<a[i+1])
   {
    x=0 ;
    break ;
   }
  }
  
  for(int i = ind ;i>0 ;i--)
  {
   if(a[i]<a[i-1])
   {
    x=0 ;break ;
   }
  }
  
  if(x==0) cout << "NO" << endl ;
  else cout << "YES" << endl ;
 
}
 
}