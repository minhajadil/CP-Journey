#include<bits/stdc++.h>
using namespace std ;




int main()
{
  int n,k ;
  cin >> n >> k ;

  set<int> p ;
  for(int i = 1 ;i<=n ;i++)
  {
    p.insert(i) ;
  }
  map<int,int> c ;

  while(k--)
  {
    int x ,y ;
    cin >> x >>y ;

    if(x==3)
    {
     // cout << p.count(y) << endl ;
      if(p.count(y)==1) cout << "No" << endl ;
      else cout << "Yes" << endl ;
    }
    else if(x==1)
    {
      c[y]++ ;
      if(c[y]==2) p.erase(y) ;
    }
    else if(x==2) p.erase(y) ;
  }

}