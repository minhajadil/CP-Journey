#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n , m ;
    cin >> n >> m ;
 
    priority_queue<int,vector<int>, greater<int>> q ;
 
    for(int i =0 ;i<n ;i++)
    {
      int x ;
      cin >> x ;
      q.push(x) ;
    }
 
 
    while(m--)
    {
      int y ;
      cin >> y ;
        q.pop() ;
 
 
      q.push(y) ;
    
    }
 
    long long sum=0 ;
 
    while(!q.empty())
    {
      int x = q.top() ;
      sum+=x ;
      q.pop() ;
    }
    cout << sum << endl ;
 
 
  }
} 