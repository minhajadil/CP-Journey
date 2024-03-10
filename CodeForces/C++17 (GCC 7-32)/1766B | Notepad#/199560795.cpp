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
    int h =0 ;
 
    for(int i =0 ;i<n-2 ;i++)
    {
      string b ;
      b+=a[i] ;
      b+=a[i+1] ;
 
      auto it = a.find(b,i+2) ;
      if(it!= string::npos)
      {
        h=1 ;
        break ;
      }
      else b.clear() ;
 
    }
 
    if(h==1) cout << "yes" << endl ;
    else cout << "no" << endl ;
 
 
  }
 
 
}