#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
    int n ;
    cin >> n ;
    int a[n+1] ;
    int max =0 ;
 
    for(int i =1 ;i<=n ;i++)
    {
        cin >> a[i] ;
        if(a[i]-i>max) max= a[i]-i ;
    }
    cout << max << endl ;
}
}