#include<bits/stdc++.h>
using namespace std ;
int main() {
  int t ;
  cin>> t ;
  int a[11] = {44,47,74,77,444,447,477,474,777,774,747} ;
  int t1=t ;
  int r ;
  int counter=0, s=0 ;
 
  if(t%4==0 || t%7==0) cout << "YES" << endl ;
  else {
        for(int i =0 ;i<11 ;i++) {
    if(t%a[i]==0) counter++ ;
  }
  if(counter>0) cout << "YES" << endl ;
  else cout <<"NO" << endl ;
 
 
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0 ;
}