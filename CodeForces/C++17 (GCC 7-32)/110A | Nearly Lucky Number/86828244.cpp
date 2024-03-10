#include<bits/stdc++.h>
using namespace std ;
 
int main() {
 
    unsigned long long int t ;
    cin>> t ;
 
    int counter =0 ;
    int r ;
    while(t>=1) {
        r=t%10 ;
        if(r==7 ||r==4) counter++ ;
        t=t/10 ;
    }
    if(counter==7 || counter==4) cout << "YES" << endl ;
    else cout << "NO" << endl ;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0 ;
}