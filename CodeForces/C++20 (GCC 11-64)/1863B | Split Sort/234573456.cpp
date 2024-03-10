#include<bits/stdc++.h>
using namespace std ;
 
 
const int N =1e5+1 ;
int pos[N] ;
 
void solve()
{
    int n ; cin >> n ;
 
    for(int i =1 ;i<=n ;i++)
    {
        int x ; cin >> x ;
        pos[x]=i ;
    }
    int cnt=0 ;
 
    for(int i =1 ;i<n ;i++)
    {
        if(pos[i]>pos[i+1]) cnt++ ;
    }
 
    cout << cnt << endl ;
 
 
}
 
 
 
 
 
 
int main()
{
    int t ; cin >>  t ;
 
    while(t--)
    {
        solve() ;
    }
 
 
}