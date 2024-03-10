#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    long long n , x ,p ;
    cin >>n >> x >> p ;
    long long pos ;
    int f = 0 ;
 
    for(long long i =1 ;i<=min(p,2*n) ;i++)
    {
      pos=(x+((i*(i+1))/2))%n ;
     // cout << pos << endl ;
 
      if(pos==0)
      {
        f=1 ;
        break ;
 
      }
 
    }
    if(f==1) cout << "yes" << endl ;
    else cout << "no" << endl ; 
  }
}