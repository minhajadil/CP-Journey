#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ,m ;
    cin >> n >> m ;
    if(n==1 || m==1) cout << n << " " <<m << endl ;
 
    else if((n>1 ||m>1) && (n<=3 || m<=3)) cout << 2 << " " << 2 << endl ;
 
else cout << n << " " <<m << endl ;
 
 
 
    }
}