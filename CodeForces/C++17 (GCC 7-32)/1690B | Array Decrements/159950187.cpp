#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
        int n ;
        cin>> n ;
        int a[n] ;
        int b[n] ;
        int max=0 ;
 
        for(int i =0 ;i<n ;i++)
        {
            cin >> a[i] ;
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i] ;
            if(a[i]-b[i]>max) max = a[i]-b[i] ; 
        }
        int x=0 ;
 
        for(int i =0 ;i<n ;i++)
        { int r = a[i]-b[i] ;
            if(b[i]!=0 && r!=max)
            {
                x=1 ;
                break ;
            }
        }
        if(x==1) cout << "NO" << endl ;
        else cout << "YES" << endl ;
 
 
 
 
 
    }
 
 
 
}