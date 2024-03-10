#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
 
int main()
{
  string a ; cin >> a ;
 
  int flag =-1 ;
 
 
  for(int i =0 ;i<a.size() ;i++)
  {
    if(a[i]=='0')
    {
      flag = i ;
      break ;
    }
  }
 
  if(flag!=-1)
  {
    for(int i =0 ;i<a.size() ;i++)
    {
      if(flag!=i) cout << a[i] ;
    }
    cout<< endl ;
  }
  else 
  {
    a.pop_back() ;
    cout << a << endl ;
  }
 
 
 
 
}