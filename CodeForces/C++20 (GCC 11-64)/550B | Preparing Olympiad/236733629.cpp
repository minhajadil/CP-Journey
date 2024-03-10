#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
 
  int n ; cin >> n ;
 
  int a[n] ;
  
  int mn_v , mx_v ,mn_diff ; cin >> mn_v >> mx_v >> mn_diff ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
  }
  int cnt=0 ;
 
  for(int i =0 ;i<(1<<(n)) ;i++)
  {
 
    int x = i ;
    multiset<int> mul ;
    int y =0 ;
    int sum =0 ;
 
    while(x!=0)
    {
      if(x&1) { mul.insert(a[y]) ;
      sum+=a[y] ;
              }
      y++ ;
      x>>=1 ;
    }
 
    if(mul.size()>=2)
    {
    int cur_mn = *mul.begin() ;
    int cur_mx = *(--mul.end()) ;
 
    if( sum>=mn_v && sum<=mx_v && (cur_mx-cur_mn)>=mn_diff)
    {
      cnt++ ;
 
     // cout << cur_mn << " " << cur_mx << " " << endl ;
    }
  }
  }
 
  cout << cnt << endl ;
 
 
 
 
 
 
}