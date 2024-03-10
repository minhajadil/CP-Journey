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
        int a[n+1] ;
 
        for(int i =0 ;i<n ;i++)
            {
                cin >> a[i] ;
            }
        int c0 = 0 ;
 
        for(int i =0 ;i<n ;i++)
        {
            if(a[i]==0) c0++ ;
        }
 
        if(c0==n) cout << "0" << endl ;
        else 
        {
            if(c0==0) cout << "1" << endl ;
            else 
            {
                int seg=0 ;
                int cnt =0 ;
                a[n]=0 ;
                for(int i =0 ;i<=n ;i++)
                    {
                        if(a[i]==0 && cnt>0 ){
                            seg++ ;
                            cnt=0 ;
                        }
                        else if(a[i]!=0) cnt++ ;
                        if(seg>=2) break ;
                    }
                    if(seg==1) cout << 1 << endl ;
                    else cout << 2 << endl ;
            }
        }
 
 
    }
    
 
}