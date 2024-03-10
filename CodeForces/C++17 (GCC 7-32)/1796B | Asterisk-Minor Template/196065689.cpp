#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while (t--)
  {
    string a,b ;
    cin >> a >> b ;
 
    if(a[0]==b[0]) 
    {
      cout << "YES" << endl ;
      cout << a[0] << "*" << endl ;
    }
    else if(a[a.size()-1]==b[b.size()-1])
    {
      cout << "YES" << endl ;
      cout << "*" << a[a.size()-1] << endl ;
    }
    else
    {
      int f=0 ;
      int r ;
      for(int i =0 ;i<a.size() ;i++ )
      {
        for(int j =0 ;j<b.size() ;j++)
        {
          if(a[i]==b[j] && f!=1)
          { 
            if(a[i+1]==b[j+1])
            { 
              f=1 ;
              r=i ;
              break ;
 
            }
          }
 
        }
      }
 
 
      if(f==1) 
      {
        cout << "YES" << endl ;
        cout << "*" << a.substr(r,2) <<"*" << endl ;
      }
      else cout << "NO" << endl ;
 
 
    }
    
    
  }
 
}