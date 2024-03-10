#include<bits/stdc++.h>
using namespace std ;
 
int main() {
string a ;
cin>> a ;
string b ;
int n = a.size() ;
 
for(int i = 0 ;i<n ;i++) {
    if(a[i]=='+') continue ;
     else b.push_back(a[i]) ;
}
sort(b.begin(),b.end()) ;
int n1=b.size() ;
for(int i = 0 ;i<n1 ;i++) {
 cout << b[i] ;
 if(i!=n1-1) cout <<"+" ;
  else cout << endl ;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0 ;
}