#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
  int n ;
  cin >> n ;
  int p[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> p[i] ;
  }
  sort(p,p+n) ;
 
  int q ;
  cin >> q ;
 
  while(q--)
  {
    int t ;
    cin >> t ;
 
    int l =0 ,h = n-1 ;
    int ans = -1 ;
 
    while(l<=h)
    {
      int mid = (l+h)/2 ;
 
      if(p[mid]<=t)
      {
        ans = mid ;
        l= mid+1 ;
      }
      else  
      {
        h=mid-1 ;
      }
    }
    if(ans==-1) cout << 0 << endl ;
    else cout << ans+1 << endl ;
 
  }
 
 
 
}