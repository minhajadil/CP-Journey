#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i =0 ;i<n ;i++)
    {
      cin >> a[i] ;
    }
    sort(a,a+n) ;
    int b[n] ;
     b[0]=1 ;
 
 
     for(int i =1 ;i<n ;i++)
     {
      b[i]= min(b[i-1]+1,a[i]) ;
     }
 
     long long sum =0 ;
 
     for(int i =0 ;i<n ;i++)
     {
      sum+=a[i]-b[i] ;
     }
 
     cout << sum << endl ;
 
 
  }
  
 
}