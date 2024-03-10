#include<bits/stdc++.h>
using namespace std ;
 
const int  N = 1e6 ;
vector<int>adj[N] ;
 
bool vis[N] ;
int l[N] ;
 
void bfs(int v)
{
  queue<int> q ;
  q.push(v) ;
  vis[v]= true ;
  l[v]=0 ;
 
  while(!q.empty())
  {
    int cur = q.front() ;
    q.pop() ;
 
    for(int n : adj[cur])
    {
     if(!vis[n])
     { q.push(n) ;
      vis[n]= true ;
      l[n]= l[cur]+1 ;
    }
    }
 
  } 
}
 
 
 
 
int main()
{
  int n , s ,t ;
  cin >> n >> s >> t ;
 
  for(int i =1 ;i<=n ;i++)
  {
    int y ;
    cin >> y ;
    adj[i].push_back(y) ;
  }
 
  bfs(s) ;
 
  if(!vis[t]) cout << -1 << endl ;
  else cout << l[t] << endl ;
 
 
}