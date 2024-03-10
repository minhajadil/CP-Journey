#include<bits/stdc++.h>
using namespace std ;
const int N = 1e5+10 ;
vector<int> adj[N] ;
bool vis[N] ;
 
 void dfs(int vertex , int par=0)
  { vis[vertex]= true ;
    for(int child : adj[vertex])
    {
      if(child==par) continue ;
      dfs(child, vertex) ;
    }
  }
 
 
int main()
{
  int n, m ; 
  cin >> n >> m ;
 
  for(int i =1 ;i<n ;i++)
  {
    int x ;
    cin >> x ;
    adj[i].push_back(i+x) ;
  }
 
  dfs(1) ;
  if(vis[m]) cout << "YES" << endl ;
  else cout << "NO" << endl ;
 
}