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
  int n ; cin >> n ;
  vector<pair<int,int>>a ;
  vector<pair<int,int>>b ;
  vector<pair<int,int>>c ;
 
  for(int i =0 ;i<n ;i++)
  {
    int x ; cin >> x ;
    a.push_back({x,i}) ;
  }
  for(int i =0 ;i<n ;i++)
  {
    int x ; cin >> x ;
    b.push_back({x,i}) ;
  }
  for(int i =0 ;i<n ;i++)
  {
    int x ; cin >> x ;
    c.push_back({x,i}) ;
  }
 
  sort(all(a)) ;
  sort(all(b)) ;
  sort(all(c)) ;
  reverse(all(a)) ;
  reverse(all(b)) ;
  reverse(all(c)) ;
  ll ans =-1 ;
 
  for(int i =0 ;i<3 ;i++)
  {
    for(int j =0 ;j<3 ;j++)
    {
      for(int k =0 ;k<3 ;k++)
      {
        int f_ind = a[i].second , s_ind = b[j].second , t_ind= c[k].second ;
        //cout << f_ind << " " << s_ind << " " << t_ind << endl ;
 
        if(f_ind!=s_ind and s_ind!=t_ind and f_ind!=t_ind)
        {
          ans=max(ans,1ll*(a[i].first+b[j].first+c[k].first)) ;
        }
      }
    }
  }
 
  cout << ans << endl ;
 
  
 
 
  
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
 
 
 
 
 
 