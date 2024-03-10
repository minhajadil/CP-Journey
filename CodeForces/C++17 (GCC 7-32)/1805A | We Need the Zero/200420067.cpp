#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
 
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
int h =0 ;
int ln = -1 ;
 
 
  for(int k =0 ;k<=256 ;k++)
  {
    int f=1 ;
    int r = a[0]^ k ;
 
  //  unordered_map<ll,int> m ;
    for(int i =1 ; i<n; i++)
    {//cout << r << " " << endl ;
      r^=(a[i]^k) ;
     // cout << r << endl ;
    }
    if(r==0) {
      ln =k ;
      h=1 ;
      break ;
      
    }   
  }
 
 
  if(h==1) cout << ln << endl ;
  else cout << -1 << endl ;
 
  }
}