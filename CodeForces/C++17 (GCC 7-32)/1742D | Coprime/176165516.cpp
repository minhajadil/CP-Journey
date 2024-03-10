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
 
    int ind[1001]={0} ;
 
    for(int i =0 ;i<n ;i++)
    {
        int x ;
        cin >> x ;
        ind[x]= i +1 ;
    } 
    int ans = -1 ;
 
    for(int i = 1 ;i<=1000 ;i++ )
    {
        for(int j = i ; j<=1000 ;j++)
        {
            if((ind[i]!=0 && ind[j]!=0) && __gcd(i,j)==1 )
            {
                ans = max(ans , ind[i]+ind[j]) ;
            }
        }
 
    }
    cout << ans << endl ; 
 
 
    }
}