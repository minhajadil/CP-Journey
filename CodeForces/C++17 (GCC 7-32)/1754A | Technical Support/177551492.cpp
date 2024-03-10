// Problem: A. Technical Support
// Contest: Codeforces - Codeforces Round #829 (Div. 2)
 
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
  
  stack<char> q ;
 
  for(int i =0 ;i<n ;i++)
  {
   if(!q.empty())
   {
   if(a[i]=='A' && q.top()=='Q')
   {
    q.pop() ;
   }
   else q.push(a[i]) ;
   }
   else q.push(a[i]) ;
   
  }
  //cout << qr << " " << ra << endl ;
  
  //if(ra==qr) cout << "YES" << endl ;
   int sz = q.size() ;
  // cout << sz << endl ;
   if(sz==0 || (sz>0 && q.top()=='A')) cout <<"YES" << endl ;
   else cout << "NO" << endl ;
  
 }
 
 
}