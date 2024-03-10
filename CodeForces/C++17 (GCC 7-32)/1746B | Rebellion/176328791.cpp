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
    int cnt =0 ;
    int l=0 ;
    int r= n-1 ;
 
    while(l<r)
    {
        if(a[l]==1 && a[r]==0)
        {
            l++ ;
            r-- ;
            cnt++ ;
        }
        else if(a[l]==1 && a[l]==1 )
        {
            r-- ;
            
        }
        else if(a[l]==0 && a[r]==0)
        {
            l++ ;
        }
        else if(a[l]==0 && a[r]==1)
        {
            l++ ;
            r-- ;
        }
       
    }
cout << cnt << endl ;
    }
}