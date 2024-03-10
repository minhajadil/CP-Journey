#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ,k;
    cin >> n >> k ; 
    int a[n] ;
 
    map<int,int> m ;
    set<int> s ;
    int cnt =0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        m[a[i]]++ ;
        s.insert(a[i]) ;
    }
 
    for(auto it :m) {
        if(it.second>k) cnt+=k ;
        else cnt+=it.second ;
    }
cout << cnt << endl ;
 
 
 
 
    }
}