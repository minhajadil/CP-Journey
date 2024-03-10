// Problem: A. Regular Bracket Sequence
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  
  string a ;
  cin >> a ;
  
  int sz = a.size() ;
  if(sz%2!=0 || a[0]==')' || a[sz-1]=='(') cout << "NO" << endl;
  else cout << "YES" << endl ;
 
 }
 
 
 
}