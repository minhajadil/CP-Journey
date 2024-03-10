#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int n ;
  cin >> n ;
  deque<int> d ;
 
  int a[n] ;
  int mn = INT_MAX ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
    d.push_back(a[i]) ;
    mn = min(mn,a[i]) ;
  }
  int cnt =0 ;
 
 
  if(is_sorted(d.begin(),d.end())) cout << 0 << endl ;
  else
  {
 
  while(d.back()==mn || d.front()!=mn )
  {
    cnt++ ;
    int q = d.back() ;
    d.pop_back() ;
    d.push_front(q) ;
  }
 
 
 
  if(is_sorted(d.begin(),d.end())) cout << cnt << endl ;
  else cout << -1 << endl ;
}
 
 
 
 
}