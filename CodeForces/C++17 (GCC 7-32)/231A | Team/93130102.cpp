#include<bits/stdc++.h>
using namespace std ;
 
int main() {
int a,b, c ,d ;
 
cin>> a ;
int c2=0 ;
 
while(a--) {
        int c1=0 ;
    cin>> b >> c >> d ;
    if(b==1) c1++ ;
    if(c==1) c1++ ;
    if(d==1) c1++ ;
    if(c1>=2) c2++ ;
}
cout << c2 << endl ;
return 0 ;
}