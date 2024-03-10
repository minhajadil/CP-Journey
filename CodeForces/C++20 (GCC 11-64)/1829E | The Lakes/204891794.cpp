#include<bits/stdc++.h>
using namespace std ;
 
 
int a[1001][1001] ;
int depth(int i , int j,int n , int m)
{
    if(i<0 || i>=n || j<0 || j>=m) return 0 ;
    if(a[i][j]==0) return 0 ;
 
    int d = a[i][j] ;
    a[i][j]=0 ;
 
    d+=(depth(i-1,j,n,m)+depth(i+1,j,n,m)+depth(i,j+1,n,m)+depth(i,j-1,n,m)) ;
 
    return d ;
 
}
 
 
 
int main()
{
 
    int t;
    cin >> t ;
 
    while(t--)
    {
 
        int n , m ;
        cin >> n >> m ;
 
        
 
        for(int i =0 ;i<n ;i++)
        {
            for(int j =0 ;j<m ;j++)
            {
                cin >> a[i][j] ;
            }
        }
        int mx = 0 ;
 
        for(int i =0 ;i<n ;i++)
        {
            for(int j =0 ;j<m ;j++)
            {
                if(a[i][j]!=0)
                {
                    int r= depth(i,j,n,m) ;
                    mx= max(mx,r) ;
                }
            }
        }
 
        cout << mx << endl ;
 
 
 
 
 
}
}