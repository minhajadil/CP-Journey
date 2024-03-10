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
    int k ;
    cin >> k ;
    char s[n+1] ;
    vector<int> seg ;
 
 
    for(int i= 1 ;i<=n ;i++)
    {
        cin >> s[i] ;
    }
    int cnt =0 ;
    for(int i =0 ;i<=k ;i++)
    { if(s[i]=='W') cnt++ ;
    }
    seg.push_back(cnt) ;
    
    int st=1 , e = k+1 ;
    int j = 2 ;
 
    while(e!=n+1)
    {
        if(s[st]=='W') cnt-- ;
        if(s[e]=='W') cnt ++ ;
        seg.push_back(cnt) ;
        st++ ;
        e++ ;
        j++ ;
 
    }
    int min = INT_MAX ;
 
    for(auto it : seg) 
    {
        if(it<min) min = it ;
    }
    cout << min << endl ;
 
}
 
 
 
 
 
 
 
 
}