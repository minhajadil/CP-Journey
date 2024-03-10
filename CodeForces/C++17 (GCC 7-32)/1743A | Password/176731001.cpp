#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
  long long n ;
  cin >> n ; 
  int a[n] ;
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
 
  } 
 
  long long x = 10-n ;
 
  cout << ((x*(x-1))/2)*6 << endl ;
 
  }
}