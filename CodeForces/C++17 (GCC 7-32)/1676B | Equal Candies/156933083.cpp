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
        int min =INT_MAX ;
 
        int a[n] ;
 
        for(int i =0 ; i<n ;i++ )
        {
            cin >> a[i] ;
            if(a[i]<min) min=a[i] ;
        }
        int sum=0 ;
 
        for(int i=0 ;i<n ;i++)
        {
            sum+=a[i]-min ;
 
        }
cout << sum << endl ;
 
    }
 
 
 
 
 
}