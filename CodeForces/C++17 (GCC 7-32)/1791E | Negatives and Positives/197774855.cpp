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
   int cnt =0 ;
   int mn = INT_MAX ;
   long long sum=0 ;
 
 
 
   for(int i =0 ;i<n ;i++)
   {
    cin >> a[i] ;
    if(a[i]<0) { cnt++ ;
   
    }
       mn = min(abs(a[i]),mn) ;
    sum+=abs(a[i]) ;
   }
 
 
 
 
 
   if(cnt%2==0) cout << sum << endl ;
   else cout << sum-(2*mn) << endl ;
 
 
 
 
 }
}