#include<bits/stdc++.h>
using namespace std ;
 
long long d (int d)
{
  int min = 10 ;
  int max = -1 ;
 
  while(d!=0)
  {
    int r = d%10 ;
    if(r>max) max = r ;
    if(r<min) min =r ;
    d=d/10 ;
  }
  return max-min ;
 
 
}
 
 
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    long long l , r ;
    cin >> l >> r ;
 
    long long ans = -1 ;
    long long ans1 =-1 ;
 
 
    for(int i =l ;i<=min((l+1000),r) ;i++)
    { 
      if(ans<d(i))
      {
        ans=d(i) ;
        ans1 = i ;
      } 
    }
 
    cout<< ans1 << endl ;
 
    
 
 
 
    }
 
 
  }
 