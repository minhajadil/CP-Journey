#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
     string a ;
     cin >> a ;
     char s ;
     cin >> s ;
     int n = a.size() ;
 
     vector<int> v ;
 
     for(int i =0 ;i<n ;i++)
     {
        if(a[i]==s) v.push_back(i+1) ;
     }
     if(v.size()==0) cout << "NO" << endl ;
     else 
     {
        int r =0 ;
 
        for(auto it :v)
        {
            if(it%2==1) r=1 ;
        }
        if(r==1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
 
     }
 
 
 
    }
}