#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
 
    int t ; cin >> t ;
 
    while(t--)
    {
        int n, k ; cin >> n >> k ;
 
        int mn = 1e9+7 ;
 
        int cnt1 =0 ;
        int cnt2 =0 ;
 
        for(int i =0 ;i<n ;i++)
        {
            int x ; cin >> x;
            if(x%2==0) cnt1++ ;
            if(x%4==0) cnt2++ ;
            if(x%k!=0){
 
            mn = min(mn , k-(x%k)) ; 
             }
            else mn = 0 ;
        }
 
        if(k==4)
        {
            if(cnt2) cout << 0 << endl ;
            else cout << min(mn,2-min(2,cnt1)) << endl ;
        }
        else
        {
            cout << mn << endl ;
        }
 
 
    }
}