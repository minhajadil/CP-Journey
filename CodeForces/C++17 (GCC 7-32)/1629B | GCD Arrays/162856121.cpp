// Problem: B. GCD Arrays
// Contest: Codeforces - Codeforces Round #767 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1629/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
 
#include<bits/stdc++.h>
using namespace std ;
 
const int N = 0 ;
 
int main()
{
  int t; 
  cin >> t ;
 
  while(t--)
  { 
    int l , r ,k ;
    cin >> l >> r >> k ;
 
    int n = (r-l) +1 ;
    int min = n/2 ;
 
 
    if(l==r && l>1) cout << "YES" << endl ;
 
    else if(n%2==0 && k>=min) cout << "YES" << endl ;
    else if(n%2!=0)
    {
        if(l%2==0 && r%2==0)
        {
            if(k>=min) cout << "YES" << endl ;
            else cout << "NO" << endl ;
        }
        else if(k>= min+1) cout << "YES" << endl ;  
        else cout << "NO" << endl ;
    }
    else cout << "NO" << endl ;
 
 
     
 
 
  }
 
 
 
 
 
}