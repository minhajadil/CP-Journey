#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long
 
 
int main()
{
 int t ; cin >> t ;
 
 while(t--)
 {
  int n ; cin >> n ;
 
  int a[n] ,b[n] ;
 
  for(int i=0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
  if(a[0]!=1) a[0] =1 ;
  else a[0]=2 ;
 
  for(int i =1 ;i<n ;i++)
  {
   int prev= a[i] ;
   a[i]=a[i-1]+1 ;
   if(a[i]==prev) a[i] = prev+1 ;
  }
 
  cout << a[n-1] << endl ;
 
 
}
 
}