#include<bits/stdc++.h>
using namespace std ;
 
const int N = 1001 ;
bool vis[N][N] ;
int level[N][N] ;
int n , m ;
int a[N][N] ;
const int dx4[4] = {1,0,-1,0}, dy4[4] = {0,1,0,-1};
const int dx8[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy8[8] = {0, 1, 0, -1, -1, 1, -1, 1};
 int KnightX[8] = { 2, 1, -1, -2, -2, -1, 1, 2 },  KnightY[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
 
 
void dfs(int i , int j,int &dp )
 
{
    vis[i][j]= true ;
    dp+=a[i][j] ;
    for(int k =0 ;k<4 ;k++)
    {
        int x = i+dx4[k] ;
        int y = j+dy4[k] ;
 
        if(x>=0 && x<n && !vis[x][j] && a[x][j]!=0) dfs(x,j,dp) ;
        if(y>=0 && y<m && !vis[i][y] && a[i][y]!=0) dfs(i,y,dp) ;
    }
 
 
 
}
 
 
 
 
 
 
 
int main()
{
 
    int t ;
    cin >> t ;
 
    while(t--)
    {
    cin >> n >> m ;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
 
    int mx = 0 ;
     memset(vis, false, sizeof(vis));
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if(!vis[i][j]&& a[i][j]!=0)
          {
            int dp =0 ;
            dfs(i,j,dp) ;
            mx = max(mx,dp) ;
          
    
          }
        
    }
}
 
cout << mx << endl ;
 
}
 
 
 
 
}