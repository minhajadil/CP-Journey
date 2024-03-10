#include<bits/stdc++.h>
using namespace std ;
 
int main () {
 string s , b ;
 cin>> s ;
 int a = s.size() ;
 
 for(int i =0 ;i<a ;i++) {
    if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='A'|| s[i]=='O' || s[i]=='E' || s[i]=='I' || s[i]=='U'|| s[i]=='Y' || s[i]=='y') {
        continue ;
    }
    else {
        b+='.' ;
        b+=tolower(s[i]) ;
    }
 }
 
 cout << b << endl ;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0 ;}