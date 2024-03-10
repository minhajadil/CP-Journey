#include<bits/stdc++.h>
using namespace std ;
 
bool cmp(int a ,int b)
{
   if(a>b) return true ;
   else return false ;
}
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ;
    cin >> n ; 
    int a[n] ;
 
    
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    }
 
    int r = 0 ;
 
    for(int i=0 ;i<n-1 ;i++)
    {
        if(a[i]<=a[i+1]) {
            r=1 ;
            break ;
        }
    }
 
    
 
 
if(r==1) cout << "YES" << endl ;
else cout << "NO" << endl ;
 
 
 
 
 
}
}