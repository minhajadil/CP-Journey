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
 
 
///...........................//////////////
 
 
 
 
void solve()
{
  int n ;
  cin >> n ;
  int o=0 ;
  int e=0 ;
 
  for(int i =0 ;i<n ;i++)
  {
    int x ; cin >> x ;
 
    if(x&1)o++ ;
    else e++ ;
  }
 
  if(o%2!=0) cout << "NO" << endl ;
  else cout << "YES" << endl ;
 
  
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
 
 
 
 
 
 