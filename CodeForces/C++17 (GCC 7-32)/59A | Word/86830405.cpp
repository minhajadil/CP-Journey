#include<bits/stdc++.h>
using namespace std ;
int main() {
string a ;
cin>> a ;
int u=0 ,l=0 ;
 
int s = a.size() ;
 
for(int i=0 ;i<s ;i++) {
    if(a[i]>=65 && a[i]<=90) u++ ;
     else if(a[i]>=97 && a[i]<=122) l++ ;
 
}
for(int i = 0 ;i<s;i++) {
    if(u>l) a[i]=toupper(a[i]) ;
    else a[i]= tolower(a[i]) ;
 
}
 
cout << a << endl ;
 
 
 
 
 
 
 
 
 
 
 
return 0 ;
}