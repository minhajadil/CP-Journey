#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n,k ;
    cin >> n >> k  ; 
 
    int a[n+1] ;
    for(int i =1 ;i<=n ;i++)
    {
        cin >> a[i] ;
    } 
 
 
    for(int i = 1 ;i<=n ;i++ )
    {
        for(int j = i+1 ;j<=n ; j++ )
        if((i%k)==(j%k))
        {
            if(a[i]>a[j]) swap(a[i],a[j]) ;
        }
    }
    long long sum =0 ,max=0 ;
 
    for(int i =1 ;i<=n-k+1 ;i++)
    {
        sum=0 ;
        for(int j = i ;j<i+k ;j++)
        {
            sum+=a[j] ;
        }
        if(sum>max) max = sum ;
        
    }
    cout << max << endl ;
 
 
    }
}