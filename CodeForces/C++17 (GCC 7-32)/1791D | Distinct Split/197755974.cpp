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
 
    set<char> s ;
    int cnt =0 ;
    int pref[n] ;
    int suf[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
      if(s.count(a[i])==0)
      {
        s.insert(a[i]) ;
        cnt++ ;
      }
      pref[i]=cnt ;
    }
    s.clear() ;
    cnt =0 ;
 
      for(int i =n-1 ;i>=0 ;i--)
    {
      if(s.count(a[i])==0)
      {
        s.insert(a[i]) ;
        cnt++ ;
      }
      suf[i]=cnt ;
    }
    int mx =0 ;
 
    for(int i =0 ;i<n-1 ;i++)
    {
      mx=max(mx,pref[i]+suf[i+1]) ;
    }
 
cout << mx << endl ;
 
 
    
 
 
  }
 
 
}