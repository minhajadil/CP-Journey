#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--) {
 
        string a ;
        cin >> a ;
 
 
        for(int i =0 ;i<3 ;i++)
        {
           a[i]=tolower(a[i]) ;
        }
 
        
        if(a=="yes") cout << "YES" << endl ;
        else cout << "NO" << endl ;
        
    }
 
 
 
}