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
 
    int a[n] ;
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    } 
 
    int b[n] ;
    int r[n] ;
 
    b[0]= a[0] ;
    int f=0 ;
 
    for(int i =1 ;i<n ;i++)
    {
        b[i]=a[i]+b[i-1] ;
        r[i]= b[i-1]-a[i] ;
 
       // cout << b[i] << " " << r[i] << endl ;
        if(b[i]!=r[i] && r[i]>=0 ) 
            {f =1 ;  
              //  cout << b[i] << " " << r[i] << endl ;  
            
    }
    }
if(f!=1)
{  
    for(auto it :b)
    {
        cout << it << " " ;
    }
    cout << endl ;
 
    }
    else cout << -1 << endl ;
}
 
}