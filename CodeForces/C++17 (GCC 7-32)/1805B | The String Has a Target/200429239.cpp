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
  string a ;
  cin >> a ;
  char c = '}' ;
  int ind = -1 ;
  int k =0 ;
 
  for(int i =1 ;i<n ;i++)
  {
   // if(a[i]!=c) k=1 ;
    if(c>=a[i]  ) 
    {
      c= a[i] ;
      ind = i ;
   
    }
 
  }
  string r ;
  r+=c ;
  
  for(int i =0 ;i<n ;i++)
  {
    if(i!=ind) r+=a[i] ;
  }
 // cout << r << endl ;
 
  if(r<a) cout << r << endl ;
  else cout << a << endl ;
 
 
 
 
  }
}