#include<bits/stdc++.h>
using namespace std ;
 
bool almost(int n )
{
  int cnt=0 ;
  for(int i =2 ;i*i<=n ;i++)
  {
 
    if(n%i==0)
    {cnt++ ;
      while(n%i==0) 
      {
        n/=i ;
      }
    }
  }
  if(n>1) cnt++ ;
 
  if(cnt==2) return true ;
  else return false ;
}
 
 
 
int main()
{
  int n ; cin >> n ;
  int ans =0 ;
 
  for(int i =1 ;i<=n ;i++)
  {
    if(almost(i)) ans++ ;
  }
  cout << ans << endl ;
 
 
}