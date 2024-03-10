#include<bits/stdc++.h>
using namespace std ;
long long lcf(int a ,int b)
{
    long long  gcd= __gcd(a,b) ;
 
    long long ab = a*b ;
 
   long long lcf = (ab)/gcd ;
    return lcf ;
 
 
 
 
}
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ;
    cin >> n ; 
 
    int a[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    } 
 
    int b[n+1] ;
    b[0]= a[0] ;
    b[n]= a[n-1] ;
 
    for(int i =1 ;i<n ;i++)
    {
        b[i]= lcf(a[i-1] ,a[i]) ;
       // cout << b[i] << " " ;
    }
    int r =1 ;
 
    for(int i =0 ;i<n ;i++)
    {
        if((__gcd(b[i],b[i+1]))!=a[i]) r=0 ;
    }
 
    if(r==1 ) cout <<  "Yes" << endl ;
    else cout << "No" << endl ;
 
 
 
 
    }
}