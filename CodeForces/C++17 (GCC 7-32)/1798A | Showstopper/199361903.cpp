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
    int b [n] ;
  
 
 
    for(int i =0 ;i<n ;i++)
    {
      cin >> a[i] ;
    }
    for(int i =0 ;i<n ;i++)
      {
        cin >> b[i] ;
 
      }
 
      for(int i =0 ;i<n ;i++)
      {
        if(a[i]>a[n-1] || b[i]>b[n-1])
        {
          swap(a[i],b[i]) ;
        }
      }
 
      int k =1 ;
 
      for(int i =0 ;i<n ;i++)
      {
        if(a[i]>a[n-1] || b[i]>b[n-1]) 
        {
          k=0 ;
          break ;
        }
      }
 
      if(k==1) cout << "yes" << endl ;
      else cout << "no" << endl ;
  }
 
 
 
}