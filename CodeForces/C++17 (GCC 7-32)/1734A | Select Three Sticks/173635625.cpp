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
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    } 
 
    sort(a,a+n) ;
 
    int min =1e9 ;
    int op ;
 
    for(int i =1 ;i<n-1 ;i++)
    {
        op = abs(a[i-1]-a[i])+abs(a[i+1]-a[i]) ;
        if(min>op) min=op ;
 
    }
    cout << min << endl ;
 
 
 
    }
}