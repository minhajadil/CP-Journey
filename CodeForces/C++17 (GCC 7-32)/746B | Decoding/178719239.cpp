// Problem: B. Decoding
// Contest: Codeforces - Codeforces Round #386 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int n ;
 cin >> n ;
 string a ;
 cin >> a ;
 deque<char>d ;
 int x ;
 if(n%2==0) x=0 ;
 else x=1 ;
 
 for(int i =0 ;i<n ;i++)
 {
  if(x==0)
  {
   d.push_front(a[i]) ;
   x=1 ;
  }
  else { d.push_back(a[i]) ; x=0 ;}
  
 }
 for(auto it :d)
 {
  cout << it ;
 }
 cout << endl ;
 
 
}