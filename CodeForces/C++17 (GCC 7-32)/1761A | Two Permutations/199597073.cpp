#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n , a , b ;
    cin >> n >>  a >> b ;
    if(a==b && a==n && b==n ) cout << "yes" << endl ;
    else if(a+b+2<=n) cout << "yes" << endl ;
    else cout << "no" << endl ;
 
  }
}