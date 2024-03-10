#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int n , t ;
  cin >> n >> t ;
 
  int a[n+1] ;
  a[0]=0 ;
  for(int i =1 ;i<=n ;i++)
  {
    int x ;
    cin >> x ;
    a[i]= a[i-1]+x ;
  }
  int mx =-1 ;
 
  for(int i =1 ;i<=n ;i++)
  {
    int l =i ,h = n ;
    int ind = -1 ;
 
    while(l<=h)
    {
      int mid = (l+h)/2 ;
 
      if(a[mid]-a[i-1]<=t)
      {
        ind = mid ;
        l=mid+1 ;
      }
      else
      {
        h = mid-1 ;
      }
    }
    mx= max(mx,ind-i+1) ;
  }
  if(mx==-1) cout << 0 << endl ;
  else cout << mx << endl ;
 
 
}