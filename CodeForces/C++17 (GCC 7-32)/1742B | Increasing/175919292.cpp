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
 
    map<int , int> m ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        m[a[i]]++ ;
    }
    int x =1 ; 
 
    for(auto it : m)
    {
        if(it.second>1) {
            x=0 ;
            break ;
        } 
    }
 
    if(x==1) cout << "YES" << endl ;
    else cout << "NO" << endl ;
}
}