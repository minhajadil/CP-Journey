#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
    int m , n ; cin >> n >> m ;
 
    int a[m+1] ; 
 
    for(int i =1 ;i<=m ;i++){
        cin >> a[i] ;
    }
 
    sort(a+1,a+m+1) ;
 
 
 
    int mn =1e9+7 ;
 
    for(int i =1 ;i+n-1<=m ;i++)
    {
        
        mn = min(mn,a[i+n-1]-a[i]) ;
 
    }
 
        cout << mn << endl ;
 
 
 
 
 
 
 
}