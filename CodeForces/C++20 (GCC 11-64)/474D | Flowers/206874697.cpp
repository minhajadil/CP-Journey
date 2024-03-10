#include<bits/stdc++.h>
using namespace std ;
 
//............// define///.................... //
 
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
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
///...........................//////////////
////.......... debugger .........................//
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//////............................./////////////////
 
 
ll ceiling(ll a , ll b )
{
return (a+b-1)/b ;
}
 
 
 
ll mod_add(ll a, ll b) {
    return (a % MOD + b % MOD) % MOD;
}
 
ll mod_sub(ll a, ll b) {
    return (a % MOD - b % MOD + MOD) % MOD;
}
 
ll mod_mul(ll a, ll b) {
    return (a % MOD * b %MOD ) % MOD;
}
 
ll mod_expo(ll a, ll b) {
    if (b == 0) return 1;
    ll res = mod_expo(a, b / 2);
    res = mod_mul(res, res);
    if (b % 2 == 1) res = mod_mul(res, a);
    return res;
}
 
ll mod_inv(ll a) {
    return mod_expo(a, MOD - 2);
}
 
ll mod_div(ll a, ll b) {
    return mod_mul(a, mod_inv(b));
}
 
vector <ll> factors(ll n)
{
  vector<ll> factor ;
 
  for(ll i =2 ;i*i <= n ;i++)
  {
    while(n%i==0)
    {
      factor.pb(i) ;
      n/=i ;
     }
   }
 
  if  ( n>1) factor.pb(n) ;
 
  return factor ;
 
 
}
 
 
 
 
 
ll r, k ;
 
ll dp[100005] ;
 
ll ways(ll n)
{
 
  
 
  if(n==0) return 1 ;
 
  if(n<0) return 0 ;
  if(dp[n]!=-1) return dp[n] ;
 
 
  // choices 
 
  ll take_whites = ways(n-k) ;
  ll take_reds = ways(n-1) ;
 
  dp[n]= mod_add(take_whites,take_reds) ;
 
  return dp[n] ;
 
 
}
 
 
void solve()
{
  cin >> r >> k ;
 
 
  ll pref[100005] ;
  pref[0]=1 ;
 
  memset(dp,-1,sizeof(dp)) ;
 
  for(int i =1 ;i<100005 ;i++)
  {
    pref[i]= mod_add(pref[i-1],ways(i)) ;
  }
 
 
  while(r--)
  {
    ll a , b ;
    cin >> a >> b ;
 
    cout << mod_sub(pref[b],pref[a-1]) << endl ;
  }
 
 
 
 
 
 
 
  
  
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
 
 
 
 
 
 