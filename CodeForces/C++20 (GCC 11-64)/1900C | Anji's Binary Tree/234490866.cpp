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
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
 
///...........................//////////////
 
const int N = 3e5+10 ;
 
string s ;
vector<int> adj[N] ;
 
int bfs(int i)
{
    if(adj[i][0]==0 &&adj[i][1]==0 )
    {
        return 0 ;
    }
 
 
    int l =MOD ,  r= MOD ;
 
    if(adj[i][0]!=0)
    {
        l = bfs(adj[i][0]) ;
        if(s[i-1]!='L') l++ ;
    }
    if(adj[i][1]!=0)
    {
        r = bfs(adj[i][1]) ;
        if(s[i-1]!='R') r++ ;
    }
 
    return min(l,r) ;
 
 
 
 
}
 
 
 
 
void solve()
{
 
  int n ; cin >> n ;
 
  for(int i =1 ;i<=n ;i++)
  {
    adj[i].clear() ;
  }
   cin >> s ;
  int j =1 ;
 
 
 
  for(int i =1 ;i<=n ;i++)
  {
    int x , y ; cin>> x >> y ;
    if(x!=0)
    {
        adj[i].push_back(x) ;
    }
    else adj[i].push_back(0) ;
    if(y!=0)
    {
        adj[i].push_back(y) ;
    }
    else adj[i].push_back(0) ;
  }
 
 
  
  
 
 
  cout<< bfs(1) << endl ;
 
 
 
 
 
 
 
  
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif
 
 
   int t ; cin >> t ;
   while(t--)
   {
 
     solve() ;
    }
 
 
 
 
 
}
 
 
 
 
 
 