#include<bits/stdc++.h>
using namespace std ;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0) ;cout.tie(0) ;
 
 
int main()
{
    string a,b  ;
    cin >> a >>b ;
    int size=a.size() ;
    
    for(int i =0 ;i<size ;i++)
    {
        a[i]=tolower(a[i]) ;
        b[i]=tolower(b[i]);
    }
    if(a>b) cout <<  1 << endl ;
    else if(a==b)cout  << 0 << endl ;
    else cout << -1 << endl ;
    
}