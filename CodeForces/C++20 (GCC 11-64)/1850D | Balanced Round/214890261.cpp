#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    
    
    
    int t ;
    cin >> t ;
    
    while(t--)
    {
        int n , m ;
        cin >> n >> m ;
        
        vector<int> v(n) ;
        
        for(int i =0 ;i<n ;i++)
        {
            cin >> v[i] ;
        }
        
       sort(v.begin(),v.end()) ;
        
        int maxi =0 ;
        
        int cnt =0 ;
        
        for(int i =0 ;i<n-1 ;i++)
        {
            if(abs(v[i]-v[i+1])>m)
            {
                maxi=max(maxi,cnt) ;
                cnt=0 ;
            }
            else cnt++ ;
        }
        if(cnt!=0)
        { 
            maxi=max(maxi,cnt) ;
        }
        maxi++ ;
        
 
        
        cout << n-maxi << endl ;
        
        
    }
    
    
 
}