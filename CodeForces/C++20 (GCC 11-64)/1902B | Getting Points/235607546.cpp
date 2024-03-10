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
  ll n , p , l , t ;
 
  cin >> n >> p >> l >> t ;
 
 
    ll prac = n/7 ;
 
    if(prac*7+1<=n) prac++ ;
 
 
    ll cnt=0 ;
 
    bool odd =false ;
 
    if(prac%2!=0)
    {
        prac-- ;
        odd = true ;
    }
 
    cnt= ceiling(p,2*t+l) ;
 
 
 
     
 
    cnt= min(cnt,prac/2) ;
    prac-= 2*cnt ;
    
 
    p-= cnt*((2*t)+l) ;
 
 
 
 
 
 
    if(prac>0 && p>0)
    {
    
    ll x =ceiling(p,t+l) ;
 
 
    x= min(x,prac) ;
 
    prac-= x ;
    cnt+=x ;
 
 
 
    p-= x*(t+l) ;
 
    cout << p << endl ;
 
    }
 
 
 
 
 
 
   
 
 
//     while(prac>1)
//     {
//         if(p<=0) break ;
//         p-=(2*t)+l ;
//         cnt++ ;
//         prac-=2 ;
//     }
 
 
 
 
 
 
 
 
 
  if(p<=0) cout << n-cnt << endl ;
  else
  {
    if(odd)
    {
        p-= t ;
        p-=l ;
        cnt++ ;
    }
 
 
    if(p<=0) cout <<  n-cnt << endl ; 
    else { cnt+=(p+l-1)/l ;
 
    cout << n - cnt << endl ;
}
  }
 
 
 
 
  
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
 
 
 
 
 
 