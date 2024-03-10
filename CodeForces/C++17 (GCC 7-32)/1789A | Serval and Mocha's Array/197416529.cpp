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
    int f=0 ;
 
    for(int i =0 ;i<n ;i++)
    {
      for(int j =1 ;j<n ;j++)
      {
        if(__gcd(a[i],a[j])<=2) 
        {
          f=1 ; 
          break ;
        }
      }
    }
 
    if(f==1) cout << "yes" << endl ;
    else cout << "no" << endl ;
 
 
  }
}