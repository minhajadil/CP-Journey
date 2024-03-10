#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
 
 
 
 
void solve(){
 int a , b ,n ; cin >> a >> b >> n ;
 
 
 if(n%3==0) cout <<a << endl ;
 else if(n%3==1) cout << b << endl ;
 else if(n%3==2) cout << (a^b) << endl ;
 
 
 
 
 
}
 
 
 
 
 
 
int main(){
 
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL) ;
 
int t ; cin >> t ;
 while(t--){
  solve() ;
 }
 
 
 
 
}
 
 
 