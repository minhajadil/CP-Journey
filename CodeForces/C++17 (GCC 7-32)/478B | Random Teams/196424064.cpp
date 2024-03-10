#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
    long long n , m ;
    cin >> n >> m ;
    long long d = n/m;
 
    if(n%m==0) 
    {  
        cout << m*(d*(d-1)/2) << " " ;
    }
    else
    {
        long long mod = n%m ;
        long long ans = (m-mod)*(d*(d-1)/2)+(mod*(d*(d+1)/2)) ;
       cout << ans << " " ;
    }
 
    long long  r = n-(m-1) ;
 
    cout << r*(r-1)/2 << endl ;
 
 
 
}