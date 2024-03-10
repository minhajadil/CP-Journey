#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
 
    int t ; cin >> t ;
 
    while(t--)
    {
        int n ; cin >> n ;
        int k ; cin >> k ;
        int a[n+1];
 
        for(int i =1 ;i<=n ;i++) cin >> a[i] ;
 
        set<int> s ; int cur_ind = n ;
 
 
    bool ans = true ;
 
        for(int i =1 ;i<=k ;i++)
        {
            if(s.find(cur_ind)!=s.end())
            {
                break ;
            }
            if(a[cur_ind]>n)
            {
                ans = false ; break ;
            }
            s.insert(cur_ind) ;
            cur_ind=cur_ind-a[cur_ind] ;
            if(cur_ind<1) cur_ind+=n ;
        }
    
 
        if(ans) cout << "yes" << endl ;
        else cout << "no" << endl ;
 
 
    }
 
}