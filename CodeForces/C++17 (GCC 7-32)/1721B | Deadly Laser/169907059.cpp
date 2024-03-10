#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 while(t--)
 {
 
  int n,m , x , y ,d ;
  cin >> n >> m >> x >> y >> d ;
 
  bool yo =0 ;
  bool no =0 ;
 
  for(int i =1 ;i<=n ;i++)
  {
   int f = abs(x-i)+abs(y-1) ;
   //cout << f << endl ;
   if(f>d) { yo=1 ; }
   else  {yo=0 ; break ; }  
 
  } 
  //cout << yo << endl ;
  for (int i = 1; i <= m; i++)
  {
   int r = abs(x-n)+abs(y-i) ;
   
   // cout << i << endl ;
   // cout << r << endl ;
   if(r>d) no=1 ;
   else  {no=0 ; break ; }
  }
  //cout << no << endl ;
  bool ones = 0 ;
 // cout << yo << " " << no << endl ;
  if(yo==1 && no==1) ones =1 ;
  yo =0 ;
  no =0 ;
 
  for(int i =1 ;i<=m ;i++)
  {
   int f = abs(x-1)+abs(y-i) ;
   //cout << f << endl ;
   if(f>d) yo=1 ;
   else  {yo=0 ; break ; }
  } 
 
  for (int i = 1; i <= n; i++)
  {
   int r = abs(x-i)+abs(y-m) ;
   //cout << r << endl ;
   if(r>d) no=1 ;
   else  {no=0 ; break ; }
  }
  //cout << yo << " " << no << endl ;
  int two = 0 ;
  if(yo==1 && no ==1 ) two =1 ;
 
 
 
 
 
 
 
//  cout << ones << " " << two<< endl ;
 
 
 
  if(ones==1 || two==1) 
   { 
    int dis = abs((n-1)+(m-1)) ;
    cout << dis << endl ;
 
 }
 else cout << -1 << endl ;
 
}
 
}