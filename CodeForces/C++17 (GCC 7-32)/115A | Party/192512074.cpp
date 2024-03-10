#include<bits/stdc++.h>
using namespace std ;
 
const int N = 1e5+10 ;
vector<int>adj[N] ;
bool vis[N] ;
int depth[N] ;
int maxi =0 ;
 
void dfs(int vertex)
{
  //vis[vertex]= true ;
  for(int child : adj[vertex])
  {
   // if(vis[child]) continue ;
    depth[child]=depth[vertex]+1 ;
    maxi=max(maxi,depth[child]) ;
    dfs(child) ;
  }
}
 
 
 
int main()
{
  int n ;
  cin >> n ;
 
 
  for(int i =1 ;i<=n ;i++)
  {
    int x ;
    cin >>x  ;
    if(x!=-1) { adj[i].push_back(x) ;
    //adj[x].push_back(i) ;
    }
  }
 
 
  for(int i =1 ;i<=n ;i++ )
  {
   dfs(i) ;
  }
 // // sort(depth+1,depth+n+1) ;
 
 //  for(int i =1 ;i<=n ;i++)
 //  {
 //    cout << depth[i] << endl ;
 //  }
 
 //  int min = 0 ;
 //  int cnt=1 ;
 
 //  for(int i =1 ;i<=n ;i++)
 //  {
 //    if(depth[i]!=min){
 //      min = depth[i] ;
 //      cnt++ ;
 //    }
 //  }
 
 //  cout << cnt << endl ;
cout << maxi+1 << endl ;
 
 
 
}