// Problem: A. Love "A"
// Contest: Codeforces - Forethought Future Cup - Elimination Round
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 string a ;
 cin >> a ;
 
 int sz = a.size() ;
 int cnt =0 ;
 
 for(int i =0 ;i<sz ;i++)
 {
  if(a[i]=='a') cnt++ ;
 }
 
 int  r= sz-cnt ;
 
 if(cnt>r) cout << sz << endl ;
 else 
 {
  cout << sz-(r-cnt)-1 << endl ;
 }
}
 