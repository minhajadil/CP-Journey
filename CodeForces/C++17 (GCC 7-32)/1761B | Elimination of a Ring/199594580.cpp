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
    set<int> s ;
 
    for(int i =0 ;i<n ;i++)
    {
      int x ;
      cin >>x  ;
      s.insert(x) ;
    }
    if(s.size()>2 || s.size()==1) cout << n << endl ;
    else cout << ((n-2)/2)+2 << endl ;
 
 
  }
 
 
}