#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n , k ;
    cin >> n >> k ;
 
    int l = 1 , r=n ;
 
    while(l<r)
    {
      cout << r << " " << l << " " ;
      r-- ;
      l++ ;
    }
    if(n%2!=0) cout << (l+r)/2 << " " ;
    cout << endl ;
 
 
  }
 
}