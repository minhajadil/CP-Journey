#include<bits/stdc++.h>
using namespace std ;
    #define ff first
    #define ss second
    
  
 
 
int main()
{
  int n ;
  cin >> n ; 
 
  map<int,int> m ;
  int mx =-1 ;
 
  for(int i =0 ;i<n ;i++)
  {
    int x ;
    cin >>x ;
    m[x]++ ;
    mx = max(mx,m[x]) ;
  }
 
  if((n-mx)+1<mx) cout << "NO" << endl ;
  else cout << "YES" << endl ;
 
 
}