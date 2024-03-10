#include<bits/stdc++.h>
 
using namespace std ;
 
int main()
{    
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i =0 ;i<n ;i++)
    {
        cin >>a[i] ; 
    }
    int t = n-1 ;
    int i=0 ;
    int s =0 , d=0 , turn=1 ;
    while(i-2!=t-1 )
    {
        if(turn==1)
        {
            if(a[i]>a[t]) {
                s+=a[i] ;
                i++ ;
            }
            else {
                s+=a[t] ;
                t-- ;
            }
            turn =2 ;
        }
        else
        {
            if(a[i]>a[t]) {
                d+=a[i] ;
                i++ ;
            }
            else {
                d+=a[t] ;
                t-- ;
            }
            turn =1 ;
            
        }
        
        
    }
    
    
        cout << s << " " << d << endl ;
    
    
 
 
 
 
}