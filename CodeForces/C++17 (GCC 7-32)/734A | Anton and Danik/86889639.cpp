#include<bits/stdc++.h>
using namespace std ;
 
int main() {
int t ;
cin>> t ;
string a ;
cin>> a ;
int cd=0 ,ca=0 ;
 
for(int i = 0 ; i<t ;i++) {
    if(a[i]=='A') ca++ ;
    if(a[i]=='D') cd++ ;
}
if(ca>cd) cout << "Anton" << endl ;
 else if(ca<cd) cout << "Danik" << endl ;
   else cout << "Friendship" << endl ;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0 ;
}