#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n , k ;
    cin >> n >> k ;
    vector< pair < int , int > > p(n) ;
    
    for(int i=0 ;i<n ;i++)
    {
        int a , b ;
        cin >> a >> b ;
        p[i]= {a,-b} ;
    }
    
    sort(p.rbegin(),p.rend()) ;
    k=k-1 ;
    int m = p[k].first ;
    int r = p[k].second ;
   
    int cnt =0 ;
    for(int j =0 ;j<n; j++)
    {
        if(p[j].first ==m && p[j].second==r) cnt ++ ;
        
    }
    cout << cnt << endl ;
    
    
}