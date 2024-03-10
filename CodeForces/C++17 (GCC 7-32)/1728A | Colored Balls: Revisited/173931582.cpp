// One day, I'm gonna change for myself <3
// THINK SOMETHING SIMPLE FIRST !!!
 
 
#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
 
        
        
        
        int a[n] ;
        
        for(int i =0 ;i<n ;i++)
        {
            cin >>a[i] ;
        }
        if(n==1) cout << 1 << endl ;
        else
        {
       int  max=a[0] ;
        int maxindex=0 ;
 
        for(int i=0 ;i<n ;i++)
        {
            if(a[i]>=max) {
                max= a[i] ;
                maxindex = i+1 ;
        //        cout << i << endl ;
            }
        }
 
        cout << maxindex << endl ;
}
    
}
 
}