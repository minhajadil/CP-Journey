#include<bits/stdc++.h>
using namespace std ;
 
int main() {
string a , b ;
cin>> a >> b ;
int s = a.size() ;
string reva ;
 
for(int i = s-1 ;i>=0 ;i--) {
    reva.push_back(a[i]) ;
 
 
}
if(b == reva)  cout <<"YES" << endl ;
 else cout <<"NO" << endl ;
 
 
 
 
 
 
 
 
 
return 0 ;
 
}