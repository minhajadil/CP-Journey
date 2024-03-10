#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
       string a ;
    cin >> a ;
 
    string b ;
    cin >> b ;
 
    int sz = a.size() ;
    int sz1 = b.size() ;
 
    // cout << b[sz1-1] << endl ;
 
    if(a==b) cout << "=" << endl ;
    else 
    {
        if(a[sz-1]==b[sz1-1] && a[sz-1]=='S') {
            if(sz>sz1) cout << "<" << endl ;
            else cout << '>' << endl ; }
       else
       if(a[sz-1]==b[sz1-1] && a[sz-1]=='L') {
            if(sz>sz1) cout << ">" << endl ;
            else cout << '<' << endl ; } 
         
        
         else if((a[sz-1]=='S' && b[sz1-1]=='L') ||(a[sz-1]=='M' && b[sz1-1]=='L') ||(a[sz-1]=='S' && b[sz1-1]=='M')) cout << "<" << endl ;
         else cout << ">" << endl ;
    }
 
    
 
    }
}