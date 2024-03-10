#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
 
const int N = 2e5+10 ;
 
ll sum(int n ){
 
 ll sum=0 ;
 
 while(n!=0){
  sum+=n%10 ;
  n/=10 ;
 }
 return sum ;
}
 
ll pref[N] ;
 
void sum_till_n(int n){
 
 for(int i=1 ;i<=n ;i++){
  pref[i]= pref[i-1]+sum(i);
 }
 
}
 
 
 
 
 
 
 
 
void solve(){
 
 int x ; cin >> x ;
 cout << pref[x] << endl ;
 
}
 
 
 
 
 
 
int main(){
 
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL) ;
 
 int t ; cin >> t ;
 sum_till_n(N) ;
 
 
 while(t--){
  
  solve() ;
 }
 
 
 
 
}
 
 
 