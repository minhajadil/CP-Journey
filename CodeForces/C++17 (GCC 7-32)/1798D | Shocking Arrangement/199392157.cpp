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
    int a[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
      cin >> a[i] ;
    }
 
    queue<int> p ;
    queue<int> r ;
 
 
    if(*max_element(a,a+n)==0 && *min_element(a,a+n)==0) cout << "NO" << endl ;
    else
    {
      cout << "YEs" << endl ;
 
    
 
    for(int i =0 ;i<n ;i++)
    {
      if(a[i]<0) r.push(a[i]) ;
      else p.push(a[i]) ; 
    }
    int sum =0 ;
 
    while(!r.empty() || !p.empty())
    {
      if(sum<=0)
      {
        sum+=p.front() ;
        cout << p.front() << " " ;
        p.pop() ;
 
      }
      else
      {
        sum+=r.front() ;
        cout << r.front() <<" " ;
        r.pop() ;
      }
    }
    cout << endl ;
  }
 
 
 
  }
 
}