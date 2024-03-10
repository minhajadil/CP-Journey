#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
 
 
 
 
int main()
{
  int n ; cin >> n ;
 
  int ans = n/2 ;
 
  if(n%2==0)
  {
    cout << n/2 << endl ;
    for(int i =0 ;i<n/2 ;i++)
    {
      cout << 2 << " " ;
    }
    cout << endl ;
  }
  else
  {
    int ans = n/2 ;
    cout << ans << endl ;
    ans-- ;
 
    for(int i =0 ;i<ans ;i++)
    {
      cout << 2 << " " ;
    }
    cout << 3 << endl ;
  }
 
 
}
                          