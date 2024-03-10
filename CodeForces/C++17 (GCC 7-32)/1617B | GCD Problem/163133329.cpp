#include<bits/stdc++.h>
using namespace std ;
 
const int N = 0 ;
 
int main()
{
  int t; 
  cin >> t ;
 
  while(t--)
  { 
    int n ;
    cin >> n ;
 
     n=n-1 ; 
 
     if(n%2!=0)
     {
        cout << (n-2) << " " << 2 << " " << 1 << endl ; // since n-1 is odd , then n-3 will also be odd , gcd(odd,2)=1  
 
     }
     else 
     {
        int r = n/2 ; 
        // case no 1 ; n/2 = even . even+even = even
        if(r%2==0) cout << r+1 << " " << r-1 << " " << 1 << endl ;
        // case no 2 , n/2 = odd . odd+odd=even
        else cout << r+2 << " " << r-2 << " " << 1 << endl ;
        // n, n+4 , there divisors are 1 ,2 ,4 . since both of them are odd , then their only divisor is 1 
     }
 
 
     
 
 
  }
 
 
 
 
 
}