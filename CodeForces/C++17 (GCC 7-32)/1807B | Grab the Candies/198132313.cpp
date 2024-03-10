#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int  n ;
  cin >> n ;
 
  int a[n] ;
  int x =0 ;
  int y=0 ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
   if(a[i]%2==0) x+=a[i];
   else y+=a[i] ;
  }
 
  if(x>y) cout<< "yes" << endl ;
  else cout << "no" << endl ;
 
 
 }
 
 
 
 
 
}
 
 