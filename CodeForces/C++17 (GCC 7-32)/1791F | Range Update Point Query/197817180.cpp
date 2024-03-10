#include<bits/stdc++.h>
using namespace std ;
 
int sum(int n )
{
  int s = 0 ;
  while(n!=0)
  {
    s+=n%10 ;
    n/=10 ;
  }
  return s ;
}
 
 
 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
  int n,q ;
  cin >> n >> q  ;
  int a[n+1] ;
  set<int>s ;
 
  for(int i =1 ;i<=n ;i++)
  {
    cin >> a[i] ;
    s.insert(i) ;
  }  
 
  while(q--)
  {
    int f ;
    cin >> f ;
 
    if(f==1)
    {
      int l , r ;
      cin >> l >> r ;
      int ls = l ;
 
      while(!s.empty())
      {
        auto it = s.lower_bound(ls) ;
        if(it==s.end() || *it>r) break ;
 
         a[*it] = sum(a[*it]);
                int p = *it;
                s.erase(it);
                if(a[p] > 9) s.insert(p);
                ls = p + 1;
 
 
      }
    }
    else 
    {
      int x ;
      cin >> x ;
      cout << a[x] << endl ;
    }
  }
 
 
 
  }
}