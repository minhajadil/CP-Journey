#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
  int n ;
  cin >> n ;
  int s[n+1] ; 
  s[0]=0 ;
 
  for(int i =1 ;i<=n ;i++)
  { int x ;
    cin >> x ;
    s[i]=s[i-1]+x ;
  }
  int q ;
  cin >> q ;
 
  while(q--)
  {
    int t ;
    cin >> t ;
 
    int l =1 ,h = n ;
    int ans = 1 ;
 
    while(l<=h)
    {
      int mid = (l+h)/2 ;
 
      if(s[mid]<t)
      {
        l= mid+1 ;
      }
      else
      {
        ans =mid ;
        h=mid-1 ;
      }
    }
    cout << ans << endl ;
 
  }
 
 
 
}