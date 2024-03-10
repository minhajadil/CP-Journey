#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 
    int n ;
    cin >> n ;
 
    int a[n] ;
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    }
    int max=-1 ;
    int cnt =0 ;
    int f = 1 ;
    bool y =0 ;
    if(a[0]==1) y=1 ;
    int first=0 ;
 
     for(int i =0 ;i<n ;i++)
     {
        if(a[i]==1) cnt++ ;
        if(max<cnt) max= cnt ;
        if(f==1 && y==1 &&a[i]==0) { first=max ; f=2 ; }  
        if(a[i]==0) cnt =0 ;
     }
     int r=0 ;
 
     if(a[n-1]==1)
     {
        for(int i =n-1 ; i>=0 ;i--)
        {
            if(a[i]==0) break ;
            else r++ ;
        }
     }
     first = r+ first ;
 
     if(max<first) max=first ;
 
 
     cout << max << endl ;
    
}