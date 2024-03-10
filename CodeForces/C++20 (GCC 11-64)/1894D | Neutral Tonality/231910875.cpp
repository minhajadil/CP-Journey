#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
  int t ; cin >> t ;
 
  while(t--)
  {
    int n , m ; cin >> n >> m ;
 
    int a[n] ; int b[m] ;
 
    for(int i =0 ;i<n ;i++) cin >> a[i] ;
    for(int i =0 ;i<m ;i++) cin >> b[i] ;
 
      sort(b,b+m) ; reverse(b,b+m) ;
 
int i =0 , j =0 ;
    while(i<n || j<m)
    {
      if(i==n)
      {
        cout << b[j++] << " " ;
      }
     else if(j==m)
      {
        cout << a[i++] << " " ;
      }
      else
      {
        if(a[i]<b[j]) cout << b[j++] << " " ;
        else cout << a[i++] << " " ;
      }
    }
 
    cout << endl ;
 
 
  }
 
 
}