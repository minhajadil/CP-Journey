#include<bits/stdc++.h>
using namespace std ;

//............// define///.................... //




typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vc vector
#define vi vc<int>
#define vll vc<ll>
#define pii pair<int,int>
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
ll llmin(ll a , ll b){if(a<b) return a ; else return b ;}
ll llmax(ll a , ll b) {if(a>b) return a ; else return b ;}


const int N = 1e5+10 ;

vector<int> adj[N] ; bool vis[N] ; int dp[N] ;


int max_vertices(int source)
{
    if(vis[source]) return dp[source] ;
    int ans=0  ;
    vis[source] = true ;

    for(int child : adj[source])
    {
        ans=max(ans,max_vertices(child)) ;
    }

    return dp[source] =ans+1 ; 

}




void solve()
{
    memset(dp,-1,sizeof dp) ;
    memset(vis,false,sizeof vis) ;
    int n, m ; cin >> n >> m ;

    for(int i =0 ;i<m ;i++)
    {
        int x , y ; cin >> x >> y ;
        adj[x].pb(y) ;
       // adj[y].pb(x) ;
    }
    int mx = -1 ;

    for(int i =1 ;i<=n ;i++)
    {
        mx = max(mx,max_vertices(i)) ;
   
    }


    // for(int i =1 ;i<=n ;i++)
    // {
    //     cout << dp[i] << endl ;
    // }

   cout << mx-1 << endl ;




    

  
  
}










int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif


   int t =1;
   while(t--)
   {

     solve() ;
    }

 



}






