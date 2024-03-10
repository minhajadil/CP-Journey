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
 
 
///...........................//////////////
 
 
 
 
void solve()
{
  int n , m ,k; cin >> n >> m >> k ;
 
  multiset<int> a , b ;
 
  for(int i =0 ;i<n ;i++)
  {
    int x ; cin >> x  ;
    a.insert(x) ;
  }
  for(int i =0 ;i<m ;i++)
  {
    int x ; cin >> x ;
    b.insert(x) ;
  }
 // k = min(k ,5000) ;
  
 
  for(int i =1 ;i <= k && i <= 500 + (k & 1) ;i++)
  {
    if(i&1)
    {
      int  x = *a.begin() ;
      int y = *(--b.end()) ;
      // int xx = *x ;
      // int yy = *(--y) ;
 
      if(x>y) continue ;
 
      a.erase(a.begin()) ;
      b.erase(--b.end()) ;
      a.insert(y) ;
      b.insert(x) ; 
    }
 
    else
    {
      auto x = b.begin() ;
      auto y = a.end() ;
      int xx = *x ;
      int yy = *(--y) ;
 
      if(xx>yy) continue ;
 
      a.erase(--a.end()) ;
      b.erase(b.begin()) ;
      a.insert(xx) ;
      b.insert(yy) ; 
 
    }
  }
 
 
  ll sum =0 ;
 
  for(auto it : a)
  {
    ///cout << it << " " ;
    sum+=it ;
  }
 // cout << endl ;
 
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
 
 
 
 
 
 