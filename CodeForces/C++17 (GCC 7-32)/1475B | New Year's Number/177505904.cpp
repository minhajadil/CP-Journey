// Problem: B. New Year's Number
// Contest: Codeforces - Codeforces Round #697 (Div. 3)
 
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
  
  if(n<2020) cout << "NO" << endl ;
  else 
  {
   if(n%2021==0 ||n%2020==0) cout << "YES" << endl ;
   else {
    int r = n%2020 ;
    int f = n/2020 ;
    if(r<f) cout << "YES" << endl ;
    else cout <<"NO" << endl ;
   }
  }
}  
 
 
}