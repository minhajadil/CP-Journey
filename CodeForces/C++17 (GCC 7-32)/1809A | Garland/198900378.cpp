#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    unordered_map<char,int> m ;
    string a ;
    cin >> a ;
    int mx = -1 ;
 
    for(int i =0 ;i<a.size() ;i++)
    { 
      m[a[i]]++ ;
      mx= max(mx,m[a[i]]) ;
    }
 
    if(mx==3) cout << 6 << endl ;
    else if(mx==2 || mx==1) cout << 4 << endl ;
    else if(mx==4) cout << -1 << endl ;
 
 
  }
}