#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int n , m ;
    cin >> n >> m ;
 
    map<string , string> map ;
 
    for(int i =0 ;i<m ;i++)
    {
        string a , b ;
        cin >> a >> b ;
        map[a]= b ;
    } 
 
    for(int i =0 ;i<n ;i++)
    {
        string y ;
        cin >> y ;
        string x = map[y] ;
        if(y.size()<=x.size()) cout << y << " " ;
        else cout << x << " " ; 
 
    }
    cout << endl ;
 
 
 
 
}