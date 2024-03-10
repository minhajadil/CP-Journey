#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
    int t ; cin >> t ;
    
    while(t--)
    {
        int n,k ;
        cin >> n >> k ;
        
        int a[n] ;
        
        for(int i =0 ;i<n ;i++)
        {
            cin >> a[i] ;
        }
 
        int cnt=0 ;int f=-1 ;
 
        for(int i =0 ;i<n ;i++)
        {
            if(a[i]==a[0]) cnt++ ;
            if(cnt==k)
            {
                f=i ;
                break ;
            }
 
        }
 
        if(a[0]==a[n-1] && cnt>=k ) cout << "YEs" << endl ;
 
 
 
        else if(f==-1) cout << "No" << endl ;
        else
        {
            int x =0 ;
            cnt =0 ;
 
            for(int i =f ;i<n ;i++)
            {
                if(a[i]==a[n-1]) cnt++ ;
                if(cnt==k) x=1 ;
            }
            if(x==1) cout << "YEs" << endl ;
            else cout << "NO" << endl ;
        }
        
        
        
        
        
        
        
    }
    
}