#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int a , b , c ;
    cin >> a >> b >> c ;
 
    int fi = a-1 ;
    int se = abs(b-c) + (c-1) ;
    //cout << fi << " " << se << endl ;
    if(fi<se) cout << 1 << endl;
    else if(fi==se) cout << 3 << endl ;
    else cout << 2 << endl ;
 
 
 
 
 
    }
}