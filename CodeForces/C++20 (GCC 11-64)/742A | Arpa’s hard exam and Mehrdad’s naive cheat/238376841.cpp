#include<bits/stdc++.h>
using namespace std ;
 
 
int binexp(int a , int b,int m )
{
 
  int ans =1 ;
 
   while(b!=0)
   {
    if(b&1) ans = (ans* a)%m;
    b>>=1 ;
    a=(a*a)%m ;
   }
   return ans ;
 
}
 
 
 
int main()
{
  int n ; cin >> n ;
  int ans=1 ;
 
  cout << binexp(8,n,10) << endl ;
 
}