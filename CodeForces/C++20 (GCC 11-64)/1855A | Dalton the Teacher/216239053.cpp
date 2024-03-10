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
 
 
 
void solve()
{
  int n ;
  cin >> n ;
 
  vector<int> a(n+1) ;
 
  int cnt =0 ;
 
  for(int i =1 ;i<=n ;i++)
  {
    cin >> a[i] ;
    if(a[i]==i) cnt++ ;
  }
 
  cout << ceiling(cnt,2) << endl ;
  
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
 
 
 
 
 
 