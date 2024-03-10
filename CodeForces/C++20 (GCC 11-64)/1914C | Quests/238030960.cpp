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
 
 
 
 
void solve()
{
  int n , k ; cin >> n >> k ;
 
  ll sum =0 ;
 
  int a[n+1] , b[n+1] ;
 
  for(int i =1 ;i<=n ;i++)
  {
    cin >> a[i] ;
  }
 
  for(int i =1 ;i<=n ;i++){
    cin >> b[i] ;
  }
 
  ll prefa[n+1] ;
  prefa[0]=0 ;
 
  for(int i =1 ;i<=n ;i++)
  {
    prefa[i]= prefa[i-1]+a[i] ;
  }
  ll prefb[n+1] ;
  prefb[0]=0 ;
 
  for(int i =1 ;i<=n ;i++)
  {
    prefb[i]= prefb[i-1]+b[i] ;
  }
 
 
//cout << prefa[3] << endl ; 
 
  ll cur_max =-1 ;
 
  for(int i =1 ;i<=n ;i++)
  {
    int s1 = prefa[i] ;
    int y = k-i ;
    cur_max= max(cur_max,1ll*b[i]) ;
 
    if(y<0) break ;
 
    sum = max(sum,s1+1ll*cur_max*y) ;
    
  
 
}
 
 
cout << sum << endl ;
 
 
 
 
 
 
  
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
 
 
 
 
 
 