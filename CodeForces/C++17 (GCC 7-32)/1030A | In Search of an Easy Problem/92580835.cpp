#include<bits/stdc++.h>
using namespace std ;
 
int main() {
    int a ;
    cin>> a ;
    int b[a] ;
    int counter = 0 ;
 
    for(int i =0 ;i<a ;i++) {
        cin>>b[i] ;
        if(b[i]==1) counter++ ;
    }
 
    if(counter>0) cout << "HARD" << endl ;
    else cout << "EASY" << endl ;
 
return 0 ;
    }