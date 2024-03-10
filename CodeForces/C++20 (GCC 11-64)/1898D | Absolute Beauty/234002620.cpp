#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
const int MOD =1e9+7 ;
 
 
 
 
 
int main()
{
 int t ; cin >> t ;
 
 
 while(t--)
 {
  int n ; cin >> n ;
  int a[n] ; int b[n] ;
 
  for(int i =0 ; i<n ;i++) cin >> a[i] ;
  for(int i =0 ;i<n ;i++) cin >> b[i] ;
 
 
 
  ll ans =0 ;
 
 for(int i =0 ;i<n ;i++)
 {
  ans+=abs(a[i]-b[i]) ;
 }
 
 
 int middle_fixed_max =-1 ;
 int middle_fixed_min = MOD ;
 
 for(int i =0 ;i<n ;i++)
 {
  if(b[i]>a[i]) swap(a[i],b[i]) ;
  middle_fixed_max=max(middle_fixed_max,b[i]) ;
  middle_fixed_min=min(middle_fixed_min,a[i]) ;
 }
 
 if(middle_fixed_max-middle_fixed_min<0) cout << ans << endl ;
 else cout << ans+2LL*(middle_fixed_max-middle_fixed_min) << endl ;
 
 
 
 
 
 
 }
 
}