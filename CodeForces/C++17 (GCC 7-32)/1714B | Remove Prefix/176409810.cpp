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
    map<int,int> m ;
 
    for(int i =0 ; i<n ;i++)
    {
        cin >> a[i] ;
        m[a[i]]++ ;
    } 
    int ind = -1 ;
 
    for(int i =0 ;i<n ;i++)
    {
        if(m[a[i]]>1) { ind = i ;
            m[a[i]]-- ;}
    }
 
    if(ind!=-1) cout << ind+1 << endl ;
    else cout << 0 << endl ;
 
    }
}