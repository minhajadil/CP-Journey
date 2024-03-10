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
    int a[n] ;
 
 
    set<int> s ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    }
    if(n==1 || is_sorted(a,a+n)) cout << 0 << endl ;
    else 
    { 
    int point ;
 
 
    for(int i =n-1 ;i>0 ;i--)
    {
        if(a[i]<a[i-1]) { point = i-1 ; break ; }
    }
 
    for(int i =0 ;i<=point ;i++)
    {
        s.insert(a[i]) ;
    }
    int secondpoint=-1 ;
 
    for(int i =n-1 ;i>point ;i--)
    {
        if(s.count(a[i])==1) { secondpoint = i ; break ; }
    }
    if(secondpoint!=-1)
    {
    
    for(int i = point ;i<=secondpoint ;i++)
    {
        s.insert(a[i]) ;
    }
}
 
    cout << s.size() << endl ;
}
 
 
    }
}