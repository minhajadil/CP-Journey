#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 while(t--)
 {
  char a[4] ;
 
  for(int i =0 ;i<4 ;i++)
  {
   cin >> a[i] ;
  }
  sort(a,a+4) ;
  int cnt =0 ;
 
  for(int i =0 ;i<3 ;i++)
  {
   if(a[i]!=a[i+1]) cnt++ ;
 
  }
  cout << cnt << endl ;
  
 
 }
}