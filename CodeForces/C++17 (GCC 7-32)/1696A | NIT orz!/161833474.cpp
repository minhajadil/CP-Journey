#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
        int x ,z ;
        cin >> x >> z ;
 
        long long a[x] ;
 
        for (int i = 0; i < x; ++i)
        {
            cin >> a[i] ;
        }
        int max=-1 ;
 
        for(int i =0 ;i<x ;i++)
        {
            a[i]=a[i]|z ;
            if(a[i]>max) max= a[i] ;
        }
        cout << max << endl ;
 
 
 
    }
 
 
 
 
}