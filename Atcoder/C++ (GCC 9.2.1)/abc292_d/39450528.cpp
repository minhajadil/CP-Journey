#include<bits/stdc++.h>
using namespace std ;
const int N =1e6 ;
vector<int> adj[N] ;
bool vis[N] ;
int te= 0 ;
int tv=0 ;

void dfs(int vertex)
{
  vis[vertex]= true ;
  tv++ ;
  te+=adj[vertex].size() ;

  for(int child : adj[vertex])
  {
    if(!vis[child])
    { dfs(child) ;
    }
  }
}






int main()
{
  int n , m ;
  cin >> n >> m ;

  for(int i =0 ;i<m ;i++)
  {
    int x ,y ;
    cin >> x >> y ;
    adj[x].push_back(y) ;
    adj[y].push_back(x) ;
  }
  int b = 1 ;

  for(int i =1 ;i<=n ;i++)
  { tv =0 ;te=0 ;

    if(!vis[i]) dfs(i) ;
    
    if(te/2!=tv) 
    {
      b=0 ;
      break ;
    }
  }
  if(b==1) cout << "Yes" << endl ;
  else cout << "No" << endl ;


}