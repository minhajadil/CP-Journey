#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
 
 
void solve(){
 
    int n ; cin >> n ;
 
    ll sum =0 ;
    map<ll,bool>checker ;
    bool flag = false ;
  
 
    for(int i =1 ;i<=n ;i++)
    { 
      ll x ; cin >> x ;
      
      if(i&1)sum-=x ;
      else sum+=x ;
 
      if(sum==0 || checker[sum])
      {
        flag = true ;
      }
      checker[sum]= true ;
    }
 
     if(flag) cout << "YES" << endl ;
     else cout << "NO" << endl ;
 
 
}
 
 
 
 
 
int main(){
 
  int t ; cin >> t ;
 
 
  while(t--){
 
solve() ;
 
 
 
  }
 
 
 
 
 
}