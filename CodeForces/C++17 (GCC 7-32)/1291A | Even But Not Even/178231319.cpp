// Problem: A. Even But Not Even
// Contest: Codeforces - Codeforces Round #616 (Div. 2)
 
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
  
  long long sum =0 ;
  
  for(int i =0 ;i<n ;i++)
  {
   sum+=a[i]-'0' ;
  }
  
  int r= 0 ;
  
  //int ind ;
  
  for(int  i =n-1 ;i>0 ;i--)
  {
   if(sum%2!=0 || (a[i]=='2' || a[i]=='8' || a[i]=='0' || a[i]=='6' || a[i]=='4'))
   {
    sum-=a[i]-'0' ;
    a.pop_back() ;
   }
   else {
    r=1 ;
    break ;
   }
  }
  
  if(r==1)cout << a << endl ;
  else cout << -1 << endl ;  
  
  
 }
 
 
}