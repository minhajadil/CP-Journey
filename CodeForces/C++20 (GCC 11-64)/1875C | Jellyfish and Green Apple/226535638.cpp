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
int n , m ; 
bool good(int x)
{
    int x_prime = x / __gcd(n,x) ;
 
    if(set_bits(x_prime)==1) return true ;
     return false ;
}
 
 
 
void solve()
{
    cin >>n >> m ;
  
  if(n%m==0)
  {
    cout << 0 << endl ;
    return ;
  }
 
  if(!good(m))
  {
    cout << -1 << endl ;
    return ;
  }
  ll cnt =0 ;
 
  ll cur_n = n%m ;
 
  while(cur_n!=0)
  {
    cnt+= cur_n ;
    cur_n= cur_n*2 ;   
    cur_n = cur_n%m ;   
  }
 
  cout << cnt << endl ;
  
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
 
 
 
 
 
 