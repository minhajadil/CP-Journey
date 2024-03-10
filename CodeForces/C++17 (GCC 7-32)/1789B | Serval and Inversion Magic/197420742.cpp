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
    int f=1 ;
    int kaj =0 ;
    int s =1 ;
    
    int l=0 , r = n-1 ;
 
    while(l<r)
    {
      if(a[l]!=a[r] && s==1)
      {
        kaj =1 ;
        s=0 ;
      }
      else if(kaj==1 && a[l]==a[r])
      {
        kaj =0 ;
      }
      else if(kaj==0 && a[l]!=a[r])
      {
        f=0 ;
        break ;
      }
      l++ ;
      r-- ;
 
    }
    if(f==1) cout << "yes" << endl ;
    else cout << "no" << endl ;
 
 
  }
}