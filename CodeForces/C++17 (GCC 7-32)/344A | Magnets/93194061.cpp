#include<bits/stdc++.h>
using namespace std ;
 
 
int main() {
int a ;
cin>> a ;
 
int b[a] ;
for(int i =0 ;i<a ;i++) {
    cin>> b[i] ;
}
 
int counter=0 ;
for(int i =0 ;i<a ;i++) {
    if(b[i]!=b[i+1]) counter++ ;
 
}
cout << counter << endl ;
 
 
 
 
 
 
 
return 0 ;
}