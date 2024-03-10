#include<bits/stdc++.h>
using namespace std ;
 
int main() {
int t ;
cin >> t ;
int a , b , c ,d ;
int f , r,m,n ;
while(t--) {
    cin >> a >>b >> c >> d ;
    if(a>b) {f= a ; n=b ;}
    else {f=b ; n= a ;}
    if(c>d) { r=c ; m=d ; }
    else  {r=d ; m=c ;}
 
    if(f<m || r<n) cout << "NO" << endl ;
    else cout << "YES" << endl ;
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
}