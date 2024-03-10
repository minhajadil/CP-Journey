#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n ;
    cin >> n ;
    int tmp = n ;
 
    string  a ;
    cin >> a ;
    int l=0 , r = tmp-1 ;
 
 
    while(l<r)
    {
      if((a[l]=='0' && a[r]=='1') || (a[r]=='0' && a[l]=='1'))
      {
        n-=2 ;
      }
      else break ;
      l++ ;
      r-- ;
 
    }
    cout << n << endl ;
  }
 
  
}