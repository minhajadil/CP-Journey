// Problem: A. Maxmina
// Contest: Codeforces - Codeforces Global Round 23
// URL: https://codeforces.com/contest/1746/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
 int t ;
 cin >> t;
 
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