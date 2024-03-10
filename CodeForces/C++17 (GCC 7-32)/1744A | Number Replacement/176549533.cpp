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
  map<int , char> m ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
  } 
  string s ;
  cin >> s ;
 
  for(int i =0 ;i<n ;i++)
  {
    m[a[i]]= s[i] ;
  }
 
  string s1= "" ;
 
  for(int i =0 ;i<n ;i++)
  {
    s1+=m[a[i]] ;
  //  cout << m[a[i]] ;
  }
  //cout << s1 << endl ;
 
  if(s1==s) cout << "YES" << endl ;
  else cout << "NO" << endl ;
 
 
 
  }
}