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
        string a ;
        cin>> a ;
        string ans ;
 
        int r = a[0]-'0' ;
 
        if(r!=9)
        {
            for(int i =0 ;i<n ;i++)
            {
                int x = 9 - (a[i]-'0') ;
                ans+=x+'0' ;
 
            }
            cout << ans << endl ;
        }
        else 
        {   int carry =0 ;
            for(int i =n-1 ;i>=0 ;i--)
            {
                
                int x = a[i]-'0' ;
                x = x+ carry ;
                if(x<=1)
                {
                    x= 1-x ;
                    ans+=x+'0' ;
                    carry =0 ;
                }
                else 
                {
    
                    x=11-x ;
                    ans+=x+'0' ;
                    carry =1 ;
                }    
 
            }
            reverse(ans.begin(),ans.end()) ;
                cout << ans << endl ;
 
        }
 
 
    }
 
 
 
 
}