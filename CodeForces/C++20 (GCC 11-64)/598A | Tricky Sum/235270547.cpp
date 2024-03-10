#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
 
int main()
{
    int t ; cin >> t ;
 
 
    while(t--)
    {
        ll n ; cin >> n ;
 
        ll sum = (n*(n+1))/2 ;
 
        ll msum =0 ;
        ll cur =1 ;
 
        while(cur<=n)
        {
            msum+=cur ;
            cur*=2 ;
        }
 
        
 
        cout << sum-2*1ll*msum << endl ;
 
    }
 
    
}
 
 