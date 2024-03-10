#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
        int n ;
        cin >>n ;
        map<int , int >  v ;
        for(int i =0 ;i<n ;i++)
        {
            int x ;
            cin >> x ;
            v[x]++ ;
        }
        int cnt=0 ;
 
        for(auto it :v)
        {
            if(it.second>1) cnt+=it.second-1 ;
        }
        if(cnt%2==0) cout << n-cnt << endl  ; 
        else cout << n-(cnt+1) << endl ;
 
 
 
 
 
    }
 
 
 
}