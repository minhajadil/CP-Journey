#include<bits/stdc++.h>
using namespace std ;
int main() {
string a,b,c ;
cin>> a ;
b= a ;
sort(b.begin(),b.end()) ;
 
int counter= a.size() ;
 
for(int i =0 ;i<counter ;i++) {
    if(b[i]==b[i+1]) continue ;
    else {
        c+=b[i] ;
    }
}
int cn = c.size() ;
if(cn%2==0) cout << "CHAT WITH HER!" << endl ;
 else cout << "IGNORE HIM!" << endl ;
 
 
 
 
 
 
 
 
 
 
 
}