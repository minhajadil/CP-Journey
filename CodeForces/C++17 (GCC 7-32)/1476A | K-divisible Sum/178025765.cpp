// Problem: A. K-divisible Sum
// Contest: Codeforces - Educational Codeforces Round 103 (Rated for Div. 2)
 
// May the provider keep us content
 
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
  
     
     // k er divisible hote n-n%k add korte hobe array te
     
     if(n==k) cout << 1 << endl ;
     else if(n==1) cout << k << endl ;
     else if(n%k==0) cout << 1 << endl ;
     else 
     {
      int add = k-(n%k) ;
      int x ;
      // since n ta element ei jinish add korte hobe so prottek e pabe
      
     if(add%n==0) x = add/n ;
     else x = (add/n)+1 ;
      
      // already prottek index e 1 ase so : 1 er shathe bakita add hobe
      cout << 1+x << endl ;
     }
     
     
  
  
 }
 
}