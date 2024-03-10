#include<bits/stdc++.h>
using namespace std ;
 
int main() {
int a, h ;
cin>> a >> h ;
int b[a] ;
int counter =0 ;
 
for(int i =0 ;i<a ;i++) {
    cin>> b[i] ;
    if(b[i]>h) counter+=2 ;
    else if(b[i]<=h) counter+=1 ;
}
 
cout << counter << endl ;
 
 
 
 
 
 
 
 
 
 
}