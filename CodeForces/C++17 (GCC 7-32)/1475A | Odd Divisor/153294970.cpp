#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
        long long a ;
        cin >>  a;
 
        if(a&(a-1))
            cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
 
 
 
}