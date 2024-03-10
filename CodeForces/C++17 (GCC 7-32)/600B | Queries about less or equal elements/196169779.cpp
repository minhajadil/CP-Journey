#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int n , k ;
  cin >> n >> k ;
  int a[n] ;
  int b[k] ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
  }
  for(int i =0 ;i<k ;i++)
  {
    cin >> b [i] ;
  }
  sort(a,a+n) ;
 
  for(int i =0 ;i<k;i++)
  {
    int l =0 ;
    int h = n-1 ;
    int r = -1 ;
 
    while(l<=h)
    {
      int mid = (l+h)/2 ;
 
      if(a[mid]>b[i])
      { 
        h = mid -1 ;
      }
      else if(a[mid]<=b[i])
      {
        r=mid ;
        l=mid+1 ;
      }
    }
    if(r==-1) cout << 0 << " " ;
 
    else cout << r+1 << " " ;
  }
 
  cout << endl ;
}