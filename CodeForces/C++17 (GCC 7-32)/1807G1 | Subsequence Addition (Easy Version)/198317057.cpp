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
 
    int a[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
      cin >> a[i] ;
    } 
 
    sort(a,a+n) ;
    int r=1 ;
 
    long long sum=0 ;
 
    if(a[0]==1)
    {
      sum+=a[0] ;
      for(int i=1 ;i<n ;i++)
      {
        if(a[i]<=sum)
        {
          sum+=a[i] ;
        }
        else 
        {
          r=0 ;
          break ;
        }
      }
 
    }
    else r=0 ;
 
    if(r==1) cout << "yes" << endl ;
    else cout << "no" << endl ;
 
 
 
  }
 
 
}