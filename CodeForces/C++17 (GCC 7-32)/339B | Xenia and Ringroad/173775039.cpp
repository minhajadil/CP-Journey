#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    long long n,m ;
    cin >> n >> m ;
 
    long long a[m] ;
    for(int i =0 ;i<m ;i++)
    {
        cin >> a[i] ;
    }
 
    long long t= a[0]-1 ;
 
 
 
    for(long long i =1 ;i<m ;i++)
    {
        if(a[i]<a[i-1]) 
        {
            t+=(n-a[i-1])+1 ;
            t+=(a[i]-1) ;
        }
        else t+=(a[i]-a[i-1]) ;
    }
    cout << t << endl ;
 
 
}