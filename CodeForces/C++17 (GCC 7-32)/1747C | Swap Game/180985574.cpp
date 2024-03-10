// Problem: C. Swap Game
// Contest: Codeforces - Codeforces Round #832 (Div. 2)
 
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
  int min = INT_MAX ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
   if(a[i]<min) min = a[i] ;
  }
  
  if(a[0]==min) cout << "BOB" << endl ;
  else cout << "Alice" << endl ;
 }
 
 
}