// Problem: C. Move Brackets
// Contest: Codeforces - Codeforces Round #653 (Div. 3)
 
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
  int ans =0 ;
  int cnt =0 ;
  
  for(int i =0 ;i<n ;i++)
  {
   if(a[i]=='(') cnt++ ;
   else 
   {
    cnt-- ;
    if(cnt<0) {
     ans+=abs(cnt) ;
     cnt=0 ;
    }
   }
  }
  
  cout << ans << endl ;
 }
 
 
}