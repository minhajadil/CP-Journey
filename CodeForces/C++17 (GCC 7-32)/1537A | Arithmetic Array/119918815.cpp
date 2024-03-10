 
#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int t ;
    cin >> t ;
    
    while(t--)
    { int n ;
    cin >> n ;
    int a[n] ;
    long sum=0 ;
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        sum+=a[i] ;
    }
    if(sum<n) cout << 1 << endl ;
    else {
    int r = sum-n ;
    cout << r << endl ; }
    
        
        
    }
    
    
}