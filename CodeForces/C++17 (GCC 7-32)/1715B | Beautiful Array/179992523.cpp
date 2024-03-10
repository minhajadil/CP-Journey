// Problem: B. Beautiful Array
// Contest: Codeforces - Codeforces Round #816 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  long long n , k , b ,s ;
  cin >> n >> k >> b >> s ;
  
  vector<long long > a(n) ;
  
   
  
  a[0]= b*k ;
  s-=b*k ;
  if(s<0) cout << -1 << endl ;
  else 
  {
   for(long long i =0 ;i<n ;i++)
   {
    long long l = min((k-1),s) ;
   // cout << l << endl ;
    a[i]+=l ;
    s-=l ;
   }
   if(s>0) cout << -1 << endl ;
   else 
   {
    for(long long i =0 ;i<n ;i++)
    {
     cout << a[i] << " " ;
    }
    cout <<endl ;
   }
   
  }
  
  
  
  
  
  
  
 }
 
 
 
}