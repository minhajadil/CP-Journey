#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
   int n ;
   cin >> n ;
 
   int a[n] ;
   for(int i =0 ;i<n ;i++)
   {
    cin >> a[i] ;
   }
 
   int cnt = a[0]+1 ;
 
   for(int i = 1 ;i<n ;i++)
   {
    cnt+=a[i-1]-min(a[i-1],a[i]) ;
    cnt++ ;
    cnt+=a[i]-min(a[i-1],a[i]) ;
    cnt++ ;
   }
 
   cout << cnt << endl ;
 
 
 
}