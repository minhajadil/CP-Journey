#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    long long  n ;
    cin >> n ;
 
    if(n==1) cout << 0 << endl ;
    else
    {
 
    long long l = sqrt(n) ;
   
 
 
    if(l*l==n) cout << l-1 << endl ;
    else cout << l << endl ;
 
  }
 
 
 
  
  }
}