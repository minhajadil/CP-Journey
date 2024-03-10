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
  char c ;
  cin >> c ;
  string s ;
  cin >> s ;
  int sz = s.size() ;
  s+=s ;
  int cnt =0 ;
  int max =0 ;
 
  for(int i =0 ;i<sz ;i++)
  {
    if(s[i]==c)
    {
      int j = i ;
      while(s[j]!='g')
      {
        cnt++ ;
        j++ ;
        i=j ;
      }
      if(cnt>max) max = cnt ;
      cnt=0 ;
 
 
    }
  }
 
  cout << max << endl ;
 
 
 
 
 
  }
}