#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
 int n ; cin >> n ;
 
 
 long long gcd =0 ;
 
 for(int i =0 ;i<n ;i++)
 {
  long long x ; cin >> x ;
  gcd=__gcd(gcd,x) ;
 }
 
 long long ans =1 ;
 
 
 for(long long i =2 ;i*i<=gcd ;i++)
 {
  int cnt= 0 ;
  if(gcd%i==0)
  {
   while(gcd%i==0)
   {
    cnt++ ;
    gcd/=i ;
   }
   ans*=(cnt+1) ;
  }
 
 }
 if(gcd>1) ans*=2 ;
 
 cout << ans << endl ;
 
 
}