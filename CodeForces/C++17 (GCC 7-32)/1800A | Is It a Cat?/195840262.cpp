#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
   int t ;
   cin >> t ;
   string m = "meow" ;
 
   while(t--)
   {
    int s ;
    cin >> s ;
    string a ;
    cin >> a ;
 
    string r = "" ;
    r+=tolower(a[0]) ;
 
    for(int i =1 ;i<s;i++)
    {
        if(tolower(a[i-1])!=tolower(a[i])) r+=tolower(a[i]) ;
    }
//    cout << r << endl ;
 
    if(r==m) cout << "YES" << endl ;
    else cout << "NO" << endl ; 
 
 
    
 
 
 
   }
 
 
 
}