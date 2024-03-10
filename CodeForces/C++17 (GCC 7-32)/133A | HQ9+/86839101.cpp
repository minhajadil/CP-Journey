#include<bits/stdc++.h>
using namespace std ;
int main() {
string a ;
cin>> a ;
int counter=0 ;
int t = a.size() ;
for(int i = 0 ;i<t ;i++) {
    if(a[i]=='H' || a[i]=='Q' || a[i]=='9' ) counter++ ;
 
}
if(counter>0) cout << "YES" << endl ;
 else cout << "NO" << endl ;
 
 
 
 
 
 
 
 
 
 
return 0 ;
 
 
}