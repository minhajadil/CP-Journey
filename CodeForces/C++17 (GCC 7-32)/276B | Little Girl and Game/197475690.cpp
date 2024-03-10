#include<bits/stdc++.h>
using namespace std ;
 
#define first ff ;
#define second ss ;
 
 
int main()
{
  string a ;
  cin >> a ;
 
  int sz = a.size() ;
  map<char,int> m ;
 
  for(int i =0 ;i<sz ;i++) 
  {
    m[a[i]]++ ;
  }
  char x = 'a' ;
  int cnt =0 ;
 
 
  for(int i =0 ;i<26 ;i++)
  {
    if(m[x+i]%2!=0) cnt++ ;
  }
 // cout << cnt << endl ;
  if(cnt%2!=0 || cnt==0) cout << "First" << endl ;
  else cout << "Second" << endl ;
 
 
 
 
}