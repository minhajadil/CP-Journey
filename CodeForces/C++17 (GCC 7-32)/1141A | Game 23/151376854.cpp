#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int n ,m ;
    cin >> n >> m ;
    int d ;
    int cnt =0 ;
 
 
    if(m%n!=0) cout << -1 << endl ;
    else 
    { d=m/n ;
        while(d%3==0)
        {
            d/=3 ;
            cnt++ ;
        }
        while(d%2==0)
        {
            cnt++ ;
            d/=2 ;
        }
        if(d==1) cout << cnt << endl ;
        else cout <<-1 << endl ;
 
    }
 
 
 
}