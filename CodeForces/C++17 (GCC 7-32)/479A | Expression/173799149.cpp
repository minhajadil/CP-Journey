#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int a , b , c ;
    cin >> a>> b >> c ;
 
    if(a==1 && b==1 && c==1) cout << 3 << endl ;
    else if((a==1 && c==1) ) cout << a+b+c << endl ; 
    else if(a==1 || b==1 || c==1) {
        int r = (a+b)*c ;
        int y = a*(b+c) ;
        if(r>y) cout << r << endl ;
        else cout << y << endl ;
 
    }
    else cout << a*b*c << endl ;
}