#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    long long n , k,number ;
    cin >> n >> k ;
 
    if(n%2!=0) number = (n+1)/2 ;
    else number= n/2 ;
 
    if(k>number) {
        k = k-number ;
        cout << k*2 << endl ;
    }
    else cout << (2*k)-1 << endl ;
 
 
    
}