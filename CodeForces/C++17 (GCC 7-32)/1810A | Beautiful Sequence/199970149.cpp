#include<bits/stdc++.h>
using namespace std ;
 
    #define ff first
    #define ss second
    
  
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n ;
    cin >> n ;
    map<int,int> m ;
 
    for(int i =1 ;i<=n ;i++)
    {
      int x ;
      cin >> x ;
      m[x]= i ;
    }
    int k =0 ;
 
    for(auto it : m )
    {
      if(it.ff<=n && it.ss>=it.ff)
      {
        k=1 ;
        break ;
      }
 
    }
 
    if(k==1) cout << "YES" << endl ;
    else cout << "NO" << endl ;
  }
}