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
        vector<long long> v ;
 
        long x[n] ;
        long t[n] ;
 
        for(int i =0 ;i<n ;i++)
        {
            cin >> x[i] ;
        }
        for(int i =0 ;i<n ;i++)
        {
            cin >> t[i] ;
        }
 
        for(int i =0 ;i<n ;i++)
        {
            v.push_back(x[i]+t[i]) ;
            v.push_back(x[i]-t[i]) ;
 
        }
 
        sort(v.begin(),v.end()) ;
        int sz = v.size() ;
        
        
        long total = (v[0]+v[sz-1]) ;
 
        int avg = total/2 ;
        
        
        if(total%2!=0) cout << avg<< ".5" << endl ;
        else cout << avg << endl ;
 
 
    }
}