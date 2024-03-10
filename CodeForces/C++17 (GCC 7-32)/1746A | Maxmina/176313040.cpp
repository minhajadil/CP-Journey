#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n , k ;
    cin >> n  >> k ;
    int a[n] ;
    int r =0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        if(a[i]==1) r =1 ;
    } 
    if(r==1) cout <<"YES" << endl ;
    else cout << "NO" << endl ;
 
    }
}