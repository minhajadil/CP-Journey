#include<bits/stdc++.h>
using namespace std ;
 
const long long m = 1e9+7 ;
 
 
 
int main()
{
  long long  x , y ,n ;
  cin >> x >> y >> n ;
  long long a[7] ;
  a[0]=0 ;
  a[1] = x ;
  a[2] = y ;
 
  for(int i =2 ; i<=5 ;i++)
  { 
    a[i+1]=((a[i]%m)-(a[i-1]%m)+m)%m ; 
  
  }
 
 
 
 if(n%6==0) cout << (a[6]+m)%m << endl ;
 else cout << (a[n%6]+m)%m << endl ; ;
 
 
 
}