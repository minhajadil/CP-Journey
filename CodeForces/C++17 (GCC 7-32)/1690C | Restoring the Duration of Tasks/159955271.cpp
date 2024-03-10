#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ;
    cin >>n ;
    int s[n] ;
    int e[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> s[i] ;
    }
    for(int i =0 ;i<n ;i++)
    {
        cin >> e[i] ;
    }
    int rs[n] ;
    rs[0]= s[0] ;
 
    for(int i=1 ;i<n ;i++)
    {
        if(s[i]<e[i-1]) rs[i]=e[i-1] ;
        else rs[i]= s[i] ;
      //  cout << rs[i] << endl ;
    }
 
    for(int i =0 ;i<n ;i++)
    {
        cout << e[i]-rs[i] << " " ;
    }
    cout << endl ;
 
 
 
 
 
}
 
 
 
}