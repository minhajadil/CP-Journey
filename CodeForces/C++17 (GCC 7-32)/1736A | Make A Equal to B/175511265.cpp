#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ;
    cin >> n ; 
    int a[n] ;
    int b[n] ;
 
    int one = 0 , one1=0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        if(a[i]==1) one++ ;
    }
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> b[i] ;
        if(b[i]==1) one1++ ;
        
    }
 
    int ans = abs(one1 -one) ;
 
    int cnt =0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        if(a[i]!=b[i]) cnt ++ ;
    }
 
    if(cnt>ans) cout << ans+1 << endl ;
    else cout << ans << endl ;
 
 
 
 
 
 
 
 
    }
}