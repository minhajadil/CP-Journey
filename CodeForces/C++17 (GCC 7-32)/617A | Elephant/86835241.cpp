#include<bits/stdc++.h>
using namespace std ;
 
int main() {
int t ;
cin>> t ;
int r ,rev ;
 
 
 r=t/5 ;
        rev=t%5 ;
 
        r+=rev/4 ;
        rev=rev%4 ;
        r+=rev/3 ;
        rev=rev%3 ;
        r+=rev/2 ;
        rev=rev%2 ;
         r+=rev/1 ;
        rev=rev%1 ;
 
 
 
 
 
cout << r << endl ;
 
return 0 ;
}