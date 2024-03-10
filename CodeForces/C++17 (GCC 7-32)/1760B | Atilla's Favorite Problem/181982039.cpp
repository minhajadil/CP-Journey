// Problem: B. Atilla's Favorite Problem
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 map<char,int> al ;
 for(int i =1 ;i<=26 ;i++)
 {
  al['a'+i+-1] = i ;
 }
 
 while(t--)
 {
  int n ;
  cin >> n ;
  string x ;
  cin >> x ;
  char f[n] ;
  for(int i =0 ;i<n ;i++)
  {
   f[i]=x[i] ;
  }
  sort(f,f+n) ;
  
  cout << al[f[n-1]] << endl ;
 }
 
 
}