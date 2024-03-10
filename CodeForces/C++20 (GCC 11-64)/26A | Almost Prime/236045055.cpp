#include<bits/stdc++.h>
using namespace std ;
 
bool almost(int n )
{
  int x=0 ;
  int cnt=0 ;
 
  for(int i =2 ;i*i<=n ;i++)
  {
 
 
    if(n%i==0)
    {
      x++ ;
      while(n%i==0)
      {
        n/=i ;
      }
    }
  }
 
  if(n>1) x++ ;
 
  if(x==2) return true ;
  else return false ;
}
 
 
 
 
int main()
{
  int n ; cin >> n ;
 
int cnt=0 ;
  for(int i =1 ;i<=n ;i++)
  {
 
    if(almost(i)) cnt++ ;
  }
 
  cout << cnt << endl ;
 
  
 
 
}