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
 
    if(n==3 || n==1) cout << -1 << endl ;
 
    else if    (n%2!=0)
    {
        for(int i=n ;i>(n+1)/2 ;i--)
        {
            cout << i << " " ;
        }
        for(int i =1 ;i<=(n+1)/2 ;i++)
        {
            cout << i << " " ;
        }
        cout << endl;
    }
    else {
        for(int i =n ;i>=1 ;i--)
        {
            cout << i << " " ;
        }
        cout << endl ;
    }
 
    }
}