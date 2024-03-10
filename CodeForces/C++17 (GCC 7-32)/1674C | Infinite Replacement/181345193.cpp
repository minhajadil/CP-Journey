// Problem: C. Infinite Replacement
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  string a,b ;
  cin >> a >> b ;
  
  int  x =0 ;
  
  for(int i =0 ; i<b.size() ;i++)
  {
   if(b[i]=='a') x=1 ;
  }
  
  if(x==1 && b.size()!=1) cout << -1 << endl ;
  else if(x==1 && b.size()==1) cout << 1 << endl ;
  else
  {
   long long f = a.size() ;
   long long r = pow(2,f) ;
   cout << r << endl ;
  }
   
  
  
  
  
  
  
  
  
  
 }
 
 
}