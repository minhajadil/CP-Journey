#include<bits/stdc++.h>
using namespace std ;
 
int main() {
 
  int a , b,counter =0 ;
  cin>> a >>b ;
 
 
while(a<=b) {
    a*=3 ;
    b=b*2 ;
    counter++ ;
 
}
 
cout << counter << endl ;
 
 
 
 
 
 
 
 
 
 
 
return 0 ;
}