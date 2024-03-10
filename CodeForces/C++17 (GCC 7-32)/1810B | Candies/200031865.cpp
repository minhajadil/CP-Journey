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
    vector<int> v ;
 
    if(n%2==0) cout << -1 << endl ;
    else 
    {
 
 
    while(n!=1)
    {
      //cout << n << endl ;
      if(((n-1)/2)%2!=0)
      {
        v.push_back(2) ;
        n=(n-1)/2 ;
      }
      else 
      {
        v.push_back(1) ;
        n=((n-1)/2) +1 ;
      }
 
    }
    cout << v.size() << endl ;
    reverse(v.begin(),v.end()) ;
 
    for(auto it :v)
    {
      cout << it << " " ;
    }
 
    cout << endl ;
  }
 
 
  }
 
 
}