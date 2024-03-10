#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
   int t ;
   cin >> t ;
 
   while(t--)
   {
    int n , k ;
    cin >> n >> k ;
 
    string a ;
    cin >> a ;
   // sort(a.begin(),a.end()) ;
    //cout << a << endl ;
    set<char> word ;
    multiset<char>s ;
    multiset<char> c ;
    int cnt= 0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        if(islower(a[i])) s.insert(a[i]) ;
        else c.insert(a[i]) ;
       word.insert(tolower(a[i])) ;
 
    }
 
    for(auto it :word)
    {
        char ch = it ;
       // cout << min(s.count(ch),c.count(toupper(ch))) << endl ;
        cnt+=min(s.count(ch),c.count(toupper(ch))) ;
        if(k>=1)
        {
           int b =max(s.count(ch),c.count(toupper(ch)))-min(s.count(ch),c.count(toupper(ch))) ;
           int p = b/2 ;
         //  cout << min(p,k) << endl ;
           cnt+=min(p,k) ;
           k-=min(p,k) ;
 
        }
    }
 
    cout << cnt << endl ;
    
 
 
 
   }
 
 
 
}