#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int a ;
 cin >> a ;
 
 int h[a+1],g[a+1] ;
 
 for(int i =1 ;i<=a ;i++)
 {
  cin>>h[i] ;
  cin >> g[i] ;
 }
 int cnt =0 ;
 
    for(int i =1 ;i<=a ;i++)
    {
     for(int k =1 ;k<=a ;k++)
     {
      if(i==k) continue ;
      else {
       if(h[i]==g[k]) cnt++ ;
      }
     }
    }
 
     cout << cnt << endl ;
 
 
 
 
 
}