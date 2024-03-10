#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ; cin >> t ;
 
  while(t--){
     int n ; cin >> n ;
 
     int mx =-1 ;
 
     for(int i =1 ;i<=n ;i++)
     {
      if(i*2<=n) mx=max(i,mx) ;
     }
     cout <<mx << endl ;
  }
}