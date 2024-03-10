// Problem: B. Ugu
// Contest: Codeforces - Codeforces Round #830 (Div. 2)
 
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
  string a ;
  cin >> a ;
  int sz = a.size() ;
  int ind ;
  
  for(int  i =0 ;i<sz ;i++)
  {
   if(a[i]>a[i+1])
   {
    ind =i ;
    break ;
    
   }
  }
  int cnt=0 ;
  
  for(int i = ind ;i<sz ;i++)
  {
   if(i+1!=sz)
   {
   if(a[i]!=a[i+1]) cnt++ ;
   }
  }
  cout <<cnt << endl ;
  
 }
 
 
}