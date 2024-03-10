#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
   int n , k ;
   cin >> n >> k ;
   int s =0 ;
   int e =0 ;
 
   for(int i =0 ; i<n ;i++)
   {
    int  x , y ;
    cin >> x >> y ;
   // cout << x << " " << y << endl ;
    if(x==k) s=1 ;
    if(y==k) e=1 ;
 
   }
 
   if(s==1 && e==1) cout << "yes" << endl ;
   else cout << "no" << endl ;
 
 
  }
 
 
}