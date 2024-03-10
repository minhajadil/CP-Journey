#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
    int n , k , d, w ;
    cin >> n >> k >> d >> w ;
    int a[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
      cin >> a[i] ;
    }
    int  i =1 ;
    int cur=k-1 ;
    int start = a[0]+w ;
    int cnt =1 ;
 
    while(i<=n-1)
    {
 
      if(cur==0)
      { cnt++ ;
        cur=k ;
        start=a[i]+w ;        
      }
      if(a[i]>start+d)
      {
        cnt++ ;
        cur =k-1 ;
        start=a[i]+w ;
        
      }
      else cur-- ;
      i++ ;
 
    }
 
    cout << cnt << endl ;
 
 
 
  }
 
 
}