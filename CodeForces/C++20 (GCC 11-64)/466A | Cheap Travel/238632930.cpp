#include<bits/stdc++.h>
using namespace std ;
 
int n , m , a , b ;
 
const int inf =1e9+7 ;
 
int dp[1001] ;
 
int ans(int n)
{
  if(n<=0) return 0 ;
 
  if(dp[n]!=-1) return dp[n] ;
  
  int c1 = ans(n-1)+a ;
  int c2 = ans(n-m)+b ;
 
  return dp[n]=min(c1,c2) ;
}
 
 
 
int main(){
 
  cin >> n >> m >> a >> b ;
 
  memset(dp,-1,sizeof dp) ;
 
cout << ans(n) << endl ;
 
 
 
}