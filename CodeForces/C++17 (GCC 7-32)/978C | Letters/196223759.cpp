#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
 
{
  int n , m ;
  cin >> n >> m ;
 
  long long a[n+1] ;
  a[0]=0 ;
  for(int i =1 ;i<=n ;i++)
  {
    long long x ;
    cin >> x ;
    a[i]=a[i-1]+x ;
  }
 
 
  while(m--)
  {
    long long y ;
    cin >> y ;
 
    int l = 1 ,h=n ;
    int ind = 1 ;
    while(l<=h)
    {
      int mid = (l+h)/2 ;
      if(a[mid]>=y)
      {
        ind = mid ;
        h= mid-1 ;
      }
      else 
      {
        l=mid+1 ;
      }
    }
 
    cout << ind << " " ;
    if(ind==1) cout << y << endl ;
    else cout << y-a[ind-1] << endl ;
 
 
  }
 
 
 
 
 
 
 
}