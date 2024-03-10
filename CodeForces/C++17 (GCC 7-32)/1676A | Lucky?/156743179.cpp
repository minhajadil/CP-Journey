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
        int i = 1 ;
        int r ;
        int sum1=0 ;
        int sum2=0 ;
 
        while(n!=0)
        {
            r=n%10 ;
            n=n/10 ;
            if(i<=3) sum1+=r ;
            else sum2+=r ;
            i++ ; 
 
        }
        if(sum1==sum2) cout << "YES" << endl ;
        else cout << "NO" << endl ;
 
        
    }
 
 
 
}