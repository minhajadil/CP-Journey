#include<bits/stdc++.h>
using namespace std ;
 
int main()
{ 
    int t ;
    cin >> t ;
    
    while(t--)
    {
        int n , k , k1 ;
        cin >> n >> k >> k1 ;
        k=k+k1 ;
        
        n=2*n-k ;
      
        int w , b ;
        cin >> w >> b ;
        w=w*2 ;
        
        b=b*2 ;
        
        bool done =0 ;
        
        if(w<=k && b<=n) done =1 ;
        
        if(done) cout << "YES" << endl;
        else cout << "NO" << endl ;
        
        
        
        
        
        
        
    }
    
}