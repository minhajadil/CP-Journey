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
 
ll binexp(ll a , ll b)
{
 
   ll ans =1 ;
 
   while(b!=0)
   {
    if(b&1) ans = (ans* a);
    b>>=1 ;
    a=(a*a) ;
   }
   return ans ;
 
}
 
const int N=1e6+10 ;
 
 
 
 
void solve()
{
  ll a , b , l ; cin >> a >> b >> l ;
 
  map<ll,int> div ;
 
 
  for(int i =1 ;i*i<=l ;i++){
   if(l%i==0){
    div[l/i]++ ;
    div[i]++ ;
   }
  }
 
 
  int cnt=0 ;
 
  map<ll,bool> done ;
 
  for(ll i =0 ;i<=31 ;i++)
  {
   for(ll j =0 ;j<=31 ;j++){
 
 
    if(binexp(b,j)>=N || 1ll*binexp(a,i)*binexp(b,j)>l ) break ;
 
    ll v = 1ll*binexp(a,i)*binexp(b,j) ;
    if(div[v] && !done[v] ){
         done[v]=true ; 
 
         
         cnt++ ;
    }
   }
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
 
 
 
 
 
 