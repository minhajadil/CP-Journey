// Problem: B. 01 Game
// Contest: Codeforces - Educational Codeforces Round 90 (Rated for Div. 2)
 
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
  
  int s = a.size() ;
  int cnt =0 ;
  int cnt1 =0 ;
  
  for(int i =0 ;i<s ;i++)
  {
   if(a[i]=='0') cnt++ ;
   else cnt1++ ;
  }
  
  int move =min(cnt,cnt1) ;
  if(move%2==0) cout << "NET" << endl ;
  else cout << "DA" << endl ;
 }
 
 
}