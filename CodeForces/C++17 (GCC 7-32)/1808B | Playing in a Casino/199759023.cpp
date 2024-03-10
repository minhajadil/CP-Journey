#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n , m ;
    cin >> n >> m ;
 
    long long a[n][m] ;
 
    for(int i =0 ;i<n ;i++)
    {
      for(int j =0 ;j<m ;j++)
      {
        cin >>a[i][j] ;
      }
    }
 
    long long b[m][n] ;
 
    for(int i =0 ;i<m ;i++)
    {
      for(int j = 0 ;j<n ;j++)
      {
        b[i][j]=a[j][i] ;
      }
 
    } // row k column ar column k row banailam.
 
   
 
    long long sum=0 ;
 
    
 
    for(int i =0 ;i<m ;i++)
    { sort(b[i],b[i]+n) ;
      for(int j =0 ;j<n ;j++)
      { 
         sum +=  j*b[i][j] -(n-1-j)*b[i][j];
      }
    } // o(n) e all pair er difference 
 
    cout << sum << endl ;
 
 
 
 
  }
 
}