#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int n , m , k ;
    cin >> n >> m >> k ;
 
    int a[m] ;
 
    for(int i = 0 ;i<m ;i++)
    {
        cin >> a[i] ;
    }
 
    int x ;
    cin >> x ;
 
    string t = bitset<21>(x).to_string() ;
 
    int cnt =0 ;
 
 
    for(int i = 0 ;i<m ;i++)
    {
        string r = bitset<21>(a[i]).to_string() ;
        int c=0 ;
 
        for(int i =0 ;i<21 ;i++)
        {
            if(r[i]!=t[i]) c++ ;
        }
        if(c<=k) cnt++ ;
    }
    cout << cnt << endl ;
 
 
 
 
}