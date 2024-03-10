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
  int cnt =0 ;
  int babu =0 ;
  int r=0 ;
  int mx =-1 ;
 
  for(int i =0 ;i<n ;i++)
  {  
    if(a[i]==1){
      cnt++ ; babu ++ ;
    }
    mx = max(mx,cnt) ;
    if(a[i]==2 && babu>=3 )
    {
      while(babu>=3)
      {
      cnt-=(babu/3) ;
      babu = babu/3+(babu%3) ;
    }
 
    }
 
  }
  cout << mx << endl ;
}
 
}
 